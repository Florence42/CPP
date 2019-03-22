/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 10:39:52 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/22 14:33:37 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed( void );
	Fixed( const int val );
	Fixed( const float fval );
	Fixed( const Fixed &finit );
	~Fixed( void );

	


	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;

	// assignment operator
	Fixed& operator = ( Fixed const & rhs );

	// comparison binary operators
	bool operator  >  ( Fixed const &rhs ) const;
	bool operator  <  ( Fixed const &rhs ) const;
	bool operator  >= ( Fixed const &rhs ) const;
	bool operator  <= ( Fixed const &rhs ) const;
	bool operator  == ( Fixed const &rhs ) const;
	bool operator  != ( Fixed const &rhs ) const;

	// arithmetic binary operators
	Fixed  operator + ( Fixed const rhs ) const;
	Fixed  operator - ( Fixed const rhs ) const;
	Fixed  operator * ( Fixed const rhs ) const;
	Fixed  operator / ( Fixed const rhs ) const;

	// unary operators
	Fixed& operator ++ ( void );			// prefix increment
	Fixed  operator ++ ( const int incr );	// postfix increment
	Fixed& operator -- ( void );			// prefix decrement
	Fixed  operator -- ( const int incr );	// postfix decrement


	//  static functions
	static Fixed const & max ( Fixed & lhs, Fixed & rhs );
	static Fixed const & max ( Fixed const &lhs, Fixed const & rhs );
	static Fixed const & min ( Fixed & lhs, Fixed & rhs );
	static Fixed const & min ( Fixed const & lhs, Fixed const & rhs );

private:

	int					_raw;
	static const int	_nbits = 8;

};

// non member functions

std::ostream & operator << ( std::ostream & out, Fixed const & rhs );

#endif

