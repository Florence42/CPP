/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 17:41:57 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/31 18:45:20 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

struct Data { std::string s1; int n; std::string s2; };
struct alloc_Data { char s1[8]; int n; char s2[8]; };

void * serialize( void )
{
	alloc_Data *data = new alloc_Data;
	char	rand_alpha[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int	len = sizeof(rand_alpha) - 1;

	srand(clock());
	for (int i = 0; i < 8; i++)
	{
		data->s1[i] = rand_alpha[rand() % len];
		data->s2[i] = rand_alpha[rand() % len];
	}
	data->n = rand();


	std::cout << "Data:" << std::endl;
	std::cout << "data->s1 ";
	for (int i = 0; i < 8; i++)
	{
		std::cout << data->s1[i];		
	}
	std::cout << std::endl;
	std::cout << "  n  -> " << data->n << std::endl;
	std::cout << "data->s2 ";
	for (int i = 0; i < 8; i++)
	{
		std::cout << data->s2[i];		
	}
	std::cout << std::endl;


	return reinterpret_cast<void*>(data);
}

Data * deserialize( void * raw )
{
	unsigned char *c = reinterpret_cast<unsigned char *>(raw);

	std::cout << std::endl;

	std::cout << "Raw decimal set:" << std::endl;
	for (size_t i = 0; i < 16 + sizeof(int); i++)
		std::cout << std::dec << std::showbase << +c[i] << " ";
	std::cout << std::endl << std::endl;

	Data	*data = new Data;
	char	*s1 = reinterpret_cast<char*>(raw);
	char	*s2 = s1 + 8 * sizeof(char) + sizeof(int);
	data->n = *reinterpret_cast<int*>(s1 + 8 * sizeof(char));
	data->s1 = std::string(s1);
	data->s1.resize(8);
	data->s2 = std::string(s2);
	data->s2.resize(8);

	return data;
}

int main( void )
{
	Data	*data = deserialize(serialize());

	std::cout << "Data:" << std::endl;
	std::cout << "  s1 -> " << data->s1 << std::endl;
	std::cout << "  n  -> " << data->n << std::endl;
	std::cout << "  s2 -> " << data->s2 << std::endl;
}
