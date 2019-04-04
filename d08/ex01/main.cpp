/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:32:03 by frivaton          #+#    #+#             */
/*   Updated: 2019/04/03 19:43:09 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main( void)
{

	SPAN sp1(1);

	try
	{
		sp1.addNumber(1);
		std::cout << "Ok" << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cout << "Sorry " << std::endl;
		std::cout << e.what() << std::endl;
	}
	sp1.display();
	std::cout << "N = " << sp1.getN() <<std::endl;

try
	{
		sp1.addNumber(2);
		std::cout << "Ok" << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cout << "Sorry " << std::endl;
		std::cout << e.what() << std::endl;
	}
	sp1.display();
	std::cout << "N = " << sp1.getN() <<std::endl;
	


}
