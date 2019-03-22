/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 10:40:05 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/22 13:39:26 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0); 
}

Fixed::Fixed( const int ival ) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(ival * pow( 2, this->_nbits )); 
}

Fixed::Fixed( const float fval ) {
	std::cout << "Float constructor called" << std::endl;
	setRawBits( roundf( fval * pow( 2, this->_nbits )));
}

Fixed::Fixed( const Fixed &finit ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = finit;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const {
	return this->_raw; 
}

void	Fixed::setRawBits( int const raw ) {
	this->_raw = raw; 
}

float	Fixed::toFloat( void ) const {
	return roundf(this->_raw) / pow( 2, this->_nbits );
}

int		Fixed::toInt( void ) const {
	return this->_raw / pow( 2, this->_nbits );
}

Fixed &Fixed::operator = (Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_raw = rhs.getRawBits();
	return *this;
}

// non member functions

std::ostream & operator << ( std::ostream & out, Fixed const & rhs )
{
	out << rhs.toFloat();
	return out;
}


