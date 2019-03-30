/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:25:37 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 15:27:10 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int				main(void)
{
    ShrubberyCreationForm	form1("JoseBovet");
	RobotomyRequestForm		form2("AnnibalLecter");
	PresidentialPardonForm	form3("Clinton");
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;

	try
	{
		Bureaucrat	bob("Bob", 150);
		std::cout << bob << std::endl;
		bob.signForm(form1);
		bob.executeForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
	}

	try
	{
		Bureaucrat	jack("Jack", 140);
		std::cout << jack << std::endl;
		jack.signForm(form1);
		jack.executeForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Jack" << std::endl;
	}

	try
	{
		Bureaucrat	jule("President", 2);
		std::cout << jule << std::endl;
		jule.executeForm(form1);
		std::cout << form1 << std::endl;

		//jule.signForm(form2);
		jule.executeForm(form2);
		std::cout << form2 << std::endl;
		jule.signForm(form2);
		std::cout << form2 << std::endl;
		jule.executeForm(form2);
		std::cout << form2 << std::endl;

		jule.signForm(form3);
		jule.executeForm(form3);
		std::cout << form3 << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Jule" << std::endl;
	}

	return (0);
}
	