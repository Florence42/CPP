/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 10:40:05 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/22 15:07:17 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) {
	setRawBits(0); 
}

Fixed::Fixed( const int ival ) {
	setRawBits(ival * pow( 2, this->_nbits )); 
}

Fixed::Fixed( const float fval ) {
	setRawBits( roundf( fval * pow( 2, this->_nbits )));
}

Fixed::Fixed( const Fixed &finit ) {
	*this = finit;
}

Fixed::~Fixed( void ) {
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
	this->_raw = rhs.getRawBits();
	return *this;
}

// comparison binary operators

bool Fixed::operator >  ( Fixed const &rhs ) const {
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator <  ( Fixed const &rhs ) const {
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator >= ( Fixed const &rhs ) const {
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator <= ( Fixed const &rhs ) const {
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator == ( Fixed const &rhs ) const {
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator != ( Fixed const &rhs ) const {
	return this->toFloat() != rhs.toFloat();
}

// arithmetic binary operators

Fixed  Fixed::operator + ( Fixed const rhs ) const {
	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed  Fixed::operator - ( Fixed const rhs ) const {
	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed  Fixed::operator * ( Fixed const rhs ) const {
	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed  Fixed::operator / ( Fixed const rhs ) const {
	return Fixed( this->toFloat() / rhs.toFloat() );
}

// unary operators

Fixed&  Fixed::operator ++ ( void ) {
	this->setRawBits( this->_raw + 1 + pow( 2, -this->_nbits ));
	return *this;
}

Fixed  Fixed::operator ++ ( const int incr) {
	Fixed tmp = *this;

	// incr and i are unused
	int i = incr;
	i = incr;
	
	++*this;
	return tmp;
}

Fixed&  Fixed::operator -- ( void ) {
	this->setRawBits( this->_raw - 1 - pow( 2, -this->_nbits ));
	return *this;
}

Fixed  Fixed::operator -- ( const int incr) {
	Fixed tmp = *this;

	// incr and i are unused
	int i = incr;
	i = incr;

	--*this;
	return tmp;
}

// non member functions and operators

std::ostream & operator << ( std::ostream & out, Fixed const & rhs )
{
	out << rhs.toFloat();
	return out;
}

Fixed const & Fixed::max ( Fixed & lhs, Fixed & rhs ) {
	return lhs > rhs ? lhs : rhs;
}

Fixed const & Fixed::max ( Fixed const & lhs, Fixed const & rhs ) {
	return lhs > rhs ? lhs : rhs;
}

Fixed const & Fixed::min ( Fixed & lhs, Fixed & rhs ) {
	return lhs < rhs ? lhs : rhs;
}

Fixed const & Fixed::min ( Fixed const & lhs, Fixed const & rhs ) {
	return lhs < rhs ? lhs : rhs;
}


