/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 10:39:52 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/22 11:48:00 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class Fixed {

public:
	Fixed( void );
	Fixed( const Fixed &finit );
	~Fixed( void );

	Fixed& operator = ( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );


private:

	int					_raw;
	static const int	_nbits = 8;

};

#endif

