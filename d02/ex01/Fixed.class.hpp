/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 10:39:52 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/22 13:34:09 by frivaton         ###   ########.fr       */
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

	Fixed& operator = ( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;


private:

	int					_raw;
	static const int	_nbits = 8;

};

// non member functions

std::ostream & operator << ( std::ostream & out, Fixed const & rhs );

#endif

