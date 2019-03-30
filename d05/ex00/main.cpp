/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:25:37 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 11:05:31 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int				main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 2);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
		
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;

	std::cout << "try Create Jean Grade = 0" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Jean" << std::endl;
	}

	std::cout << std::endl;	
	std::cout << "try incremente 1" << std::endl;
	try 
	{
        Bureaucrat Maxi("Maxi", 1);
		std::cout << Maxi << std::endl;       
		Maxi.incrementGrade();
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }

	std::cout <<std::endl;
    std::cout << "try decremente 150" << std::endl;
    try {
            
        Bureaucrat Mini("Mini", 150);
		std::cout << Mini << std::endl;
		Mini.decrementGrade();

    }
    catch (std::exception &e ) 
	{
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
	std::cout << "try decremente RegGuy" << std::endl;
    try {
            
        Bureaucrat Reg("Regular guy", 70);
		std::cout << Reg << std::endl;
		Reg.decrementGrade();
		std::cout << Reg << std::endl;		
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }	


	return (0);
}
