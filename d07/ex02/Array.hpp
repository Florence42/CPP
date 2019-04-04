/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:53:03 by frivaton          #+#    #+#             */
/*   Updated: 2019/04/04 08:43:18 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>

template<typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_datas;

	public:
		class	OutOfRangeException: public std::exception
		{
			public:
				OutOfRangeException(void) {}
				OutOfRangeException( OutOfRangeException const & e )
				{
					*this = e;
				}
				~OutOfRangeException(void) throw() {}
				
				OutOfRangeException & operator = (OutOfRangeException const & rhs)
				{
					std::exception::operator=(rhs);
					return *this;
				}
				char const	*what(void) const throw() { return ("Out of the limits");}
		};

		Array<T>(void)
		{
			_size = 0;
			_datas = NULL;
		}

		Array<T>(unsigned int size)
		{
			_size = size;
			_datas = new T[size];
		}

		~Array<T>(void)
		{
			delete [] _datas;			
		}

		Array<T>(Array<T> const &src)
		{
			*this = src;
		}

		Array<T>	&operator=(Array<T> const &rhs)
		{
			if( &rhs == this)
				return *this;

			delete [] _datas;
			_size = rhs._size;
			_datas = new T[_size];

			for (unsigned int i = 0; i < _size; i++)
				_datas[i] = rhs._datas[i];
			return (*this);
		}
		
		T	&operator[](unsigned int i) const
		{
			if (!_datas || i >= _size)
				throw (OutOfRangeException());
			return (_datas[i]);
		}

		unsigned int getSize(void) const
		{
			return (_size);
		}
};

# endif

