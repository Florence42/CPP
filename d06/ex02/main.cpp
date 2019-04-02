/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 18:55:37 by frivaton          #+#    #+#             */
/*   Updated: 2019/04/02 10:03:04 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base { public: virtual ~Base() {} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void)
{
	int	choice = rand() % 3;
	if (choice == 0)
	{
		std::cout << "Generated A" << std::endl;
		return reinterpret_cast<Base*>(new A);
	}
	else if (choice == 1)
	{
		std::cout << "Generated B" << std::endl;
		return reinterpret_cast<Base*>(new B);
	}
	else
	{
		std::cout << "Generated C" << std::endl;
		return reinterpret_cast<Base*>(new C);
	}
}

void identify_from_pointer( Base * p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "It's an A pointer!" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "It's an B pointer!" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "It's an C pointer!" << std::endl;
	else
		std::cout << "Unknown child pointer of Base" << std::endl;
}

void identify_from_reference( Base & p )
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "It's an A reference!" << std::endl;
	}
	catch (std::bad_cast &e) {
		try {
			(void)dynamic_cast<B &>(p);
			std::cout << "It's an B reference!" << std::endl;
		}
		catch (std::bad_cast &e) {
			try {
				(void)dynamic_cast<C &>(p);
				std::cout << "It's an C reference!" << std::endl;
			}
			catch (std::bad_cast &e) {}
		}
	}

	
}

int	main( void )
{
	srand(clock());

	Base	*base = generate();
	identify_from_pointer(base);
	base = generate();
	identify_from_reference(*base);
}

