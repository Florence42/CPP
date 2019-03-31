/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:25:37 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/31 10:30:25 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int				main(void)
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);

	OfficeBlock ob;

	// no intern
	try {
		ob.doBureaucracy("robotomy request", "something");
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	// no signer
	ob.setIntern(idiotOne);
	try {
		ob.doBureaucracy("robotomy request", "something");
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	// no exec
	ob.setSigner(bob);
	try {
		ob.doBureaucracy("robotomy request", "something");
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	// bob rank
	ob.setExecutor(bob);
	try {
		ob.doBureaucracy("robotomy request", "something");
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	// bob rank exec
	ob.setSigner(hermes);
	try {
		ob.doBureaucracy("robotomy request", "something");
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	// should be ok
	ob.setExecutor(hermes);
	try {
		ob.doBureaucracy("robotomy request", "something");
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }
	return (0);
}
	
