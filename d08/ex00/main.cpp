/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:01:11 by frivaton          #+#    #+#             */
/*   Updated: 2019/04/03 16:07:17 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <string>
#include <iostream>
#include "easyfind.hpp"

int				main(void)
{
	std::list<int>::iterator	result;
	std::list<int>				lst;
	std::list<int>::iterator	h;

	lst.push_back(1);
	lst.push_back(7);
	lst.push_back(21);
	lst.push_back(84);

	std::cout << "Working with list ...." <<std::endl;

	std::cout << "Output of begin and end: "; 
    for ( h = lst.begin(); h != lst.end(); ++h) 
        std::cout << *h << " "; 
	std::cout << std::endl;

	std::cout << "Easyfind 21, gives Result =  ";
	result = easyfind(lst, 21);
	if (result != lst.end())
		std::cout << *result << std::endl;
	else
		std::cout << "Not found" << std::endl;

	std::cout << "Change the found value to 42" << std::endl;
	*result = 42;
	std::cout << "Output of begin and end: "; 
    for ( h = lst.begin(); h != lst.end(); ++h) 
        std::cout << *h << " "; 
	std::cout << std::endl;
	std::cout << "Easyfind 21, gives Result =  ";
	result = easyfind(lst, 21);
	if (result != lst.end())
		std::cout << *result << std::endl;
	else
		std::cout << "Not found" << std::endl;

	std::cout << "Easyfind 42, gives Result =  ";
	result = easyfind(lst, 42);
	if (result != lst.end())
		std::cout << *result << std::endl;
	else
		std::cout << "Not found" << std::endl;

	std::cout << std::endl;
	std::cout << "Working with vector ...." <<std::endl;
	std::vector<int> g1; 
	std::vector<int>::iterator	res;
	std::vector<int>::iterator	j;
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    std::cout << "Output of begin and end: "; 
    for ( j = g1.begin(); j != g1.end(); ++j) 
        std::cout << *j << " "; 
  
	std::cout << std::endl;
    res = easyfind(g1, 6);
	std::cout << "Easyfind 6, gives Result = " << *res <<std::endl;

	std::cout << std::endl;
    res = easyfind(g1, 3);
	std::cout << "Easyfind 3, gives Result = " << *res <<std::endl;


	return (0);
}



//https://github.com/ncoden/42_CPP_pool/blob/master/d07/ex02/Array.tpp

//https://github.com/pbondoer/42-piscine_cpp/blob/master/d07/ex02/src/main.cpp//
