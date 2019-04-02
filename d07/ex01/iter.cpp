/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:41:41 by frivaton          #+#    #+#             */
/*   Updated: 2019/04/02 18:25:37 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename U, typename F>
void	iter(T *array, U len, F function)
{
	int		i;

	i = 0;
	while (i < len)
	{
		function(array[i]);
		i++;
	}
}

void print_i(int i)
{
	std::cout << "i = " << i << std::endl;
}

void print_s(std::string s)
{
	std::cout << "s = " << s << std::endl;
}

int main( void )
{
	int				array_int[] = {
		40, 41, 42, 420, 4200
	};
	std::string		array_string[] = {
		"1 ecole42.", "2 ecole42..", "3 ecole42...", "4 ecole42....", "5 ecole42....."
	};

	iter (array_int, 5, print_i);
	std::cout << std::endl;
	iter (array_string, 5, print_s);

	return (0);
}
