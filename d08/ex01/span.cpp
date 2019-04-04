/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:31:38 by frivaton          #+#    #+#             */
/*   Updated: 2019/04/03 19:48:51 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

SPAN::SPAN( void)
{}

SPAN::SPAN( unsigned int n): _N(n)
{}

SPAN::SPAN( const SPAN &rhs)
{
	*this = rhs;
}

SPAN & SPAN::operator = (const SPAN & rhs)
{
	this->_N = rhs._N;
	return *this;
}

SPAN::~SPAN(void)
{}

void SPAN::display( void )
{
	std::vector<int>::iterator	j;	

	std::cout << "Data : " << std::endl;
	for( j = this->_data.begin(); j != this->_data.end();++j )
	{
		std::cout << " " << *j ;
	}

	std::cout << std::endl;
}

unsigned int SPAN::getN(void) const
{
	return this->_N;	
}


void SPAN::addNumber(int val)
{
	if ( _data.size() == _N)
		throw SPAN::AlreadyInException();

	_data.push_back(val);
}


void SPAN::shortestSpan( void )
{
	std::vector<int>::iterator	j = _data.begin();
	unsigned int imin;

	imin = *std::min_element( j, j+ _data.size());

	std::cout << std::endl;


}




//exceptions

SPAN::AlreadyInException::AlreadyInException(void)
{}

SPAN::AlreadyInException::AlreadyInException( AlreadyInException const & e )
{
	*this = e;
}
SPAN::AlreadyInException::~AlreadyInException(void) throw() {}

SPAN::AlreadyInException & SPAN::AlreadyInException::operator = (AlreadyInException const & rhs)
{
	std::exception::operator=(rhs);
	return *this;
}

char const * SPAN::AlreadyInException::what(void) const throw() 
{ 
	return ( "Array is alredy full !");
}
