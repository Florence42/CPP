/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:25:37 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 13:09:30 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int				main(void)
{
	
	Form		form("Form 42C", 21, 21);
	std::cout << form << std::endl;

	try
	{
		Bureaucrat	bob("Bob", 42);
		std::cout << bob << std::endl;
		bob.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	jule("Julie", 2);
		std::cout << jule << std::endl;
		jule.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Julie" << std::endl;
		std::cout << e.what() << std::endl;
	}

	return (0);
}
