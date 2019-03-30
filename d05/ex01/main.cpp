/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:25:37 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 12:49:25 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int				main(void)
{
	
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
	
	Form		form("Form 42C", 21, 21);
	std::cout << form;

	try
	{
		Bureaucrat	bob("Bob", 42);
		std::cout << bob;
		bob.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	jule("Jule", 2);
		std::cout << jule;
		jule.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Jule" << std::endl;
		std::cout << e.what() << std::endl;
	}

	return (0);
}
