/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:47:55 by frivaton          #+#    #+#             */
/*   Updated: 2019/04/04 09:21:18 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int				main(void)
{
	int *a = new int();
	std::cout << "Tip  *a = " << *a << std::endl;

	Array<int> *b = new Array<int>;
	std::cout << "we get size " << b->getSize()<< std::endl;
	delete (b);	
	std::cout << "b has been deleted " << std::endl << std::endl;

	Array<int> c;
	Array<int> d(100);
	std::cout << "d(100) array size: " << d.getSize() << std::endl;
	d = c;
	std::cout << "d(100) = c then  array size: " << d.getSize() << std::endl;
	std::cout << std::endl;
	
	Array<int>		array1(20);
	Array<int>		array2;			

	std::cout << "First array1(20) size: " << array1.getSize() << std::endl;
	std::cout << "Empty array2 size: " << array2.getSize() << std::endl;

    std::cout << std::endl;
	std::cout << "Trying to set array2[0]" << std::endl;
	try {
		array2[0] = 42;
		std::cout << "SUCCESS, but was not expected !" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
    std::cout << "Setting values in array1..." << std::endl;
	array1[10] = 42;
	std::cout << "array1[10] : " << array1[10] << std::endl;
	array1[11] = 84;
	std::cout << "array1[11] : " << array1[11] << std::endl;

	std::cout << std::endl;
	std::cout << "-- Copying through assignment --" << std::endl;
    std::cout << "Before copy array2 size: " << array2.getSize() << std::endl;
	array2 = array1;
	std::cout << "Copying array1 in array2..." << std::endl;
	array1[10] = 0;
	array1[11] = 0;

	std::cout << "After copy array2 size: " << array2.getSize() << std::endl;
	std::cout << "array2[10] : " << array2[10] << std::endl;
	std::cout << "array2[11] : " << array2[11] << std::endl;

	
	std::cout << std::endl;

	std::cout << "-- Copying through copy constructor --" << std::endl;
	std::cout << "Setting back values in array1..." << std::endl;
	array1[10] = 42;
	std::cout << "array1[10] : " << array1[10] << std::endl;
	array1[11] = 84;
	std::cout << "array1[11] : " << array1[11] << std::endl;

	Array<int> array3 = Array<int>(array1);

    std::cout << "array3 size: " << array3.getSize() << std::endl;
	std::cout << "array3[10] : " << array3[10] << std::endl;
	std::cout << "array3[11] : " << array3[11] << std::endl;
	
	std::cout << "Changing values in array1..." << std::endl;
	array1[10] = 0;
	array1[11] = 0;
	std::cout << "array3[10] : " << array3[10] << std::endl;
	std::cout << "array3[11] : " << array3[11] << std::endl;

    std::cout << std::endl;
	std::cout << "Trying to set array1[30]" << std::endl;
	try {
		array1[30] = 42;
		std::cout << "SUCCESS, but was not expected !" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}
   

    std::cout << std::endl;
	Array <std::string> st(3);
	try {
		st[0] = "Nice";
		st[1] = "day";
		st[2] = "is'nt it!";
		std::cout << "----Array of std::strings: " << std::endl;
		for(int i = 0; i < 3; i++)
			std::cout << st[i] << " ";
		std::cout << std::endl;
		std::cout << "Trying to reach element with index 1:	" << st[1] << std::endl;
		std::cout << "Element with index 4: " << st[4] << std::endl;
	}
	catch(std::exception & e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}

	return (0);
}

