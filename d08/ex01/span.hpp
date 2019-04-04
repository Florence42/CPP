/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:31:54 by frivaton          #+#    #+#             */
/*   Updated: 2019/04/03 19:39:22 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>

class SPAN
{

	public:
		SPAN( unsigned int n);
		SPAN( const SPAN &rhs);
		SPAN & operator = (const SPAN & rhs);
		~SPAN(void);

		void addNumber(int val);
		void display( void);
		unsigned int getN(void) const;
		void shortestSpan( void );


		class	AlreadyInException: public std::exception
		{
			public:
				AlreadyInException(void);
				AlreadyInException( AlreadyInException const & e );
				~AlreadyInException(void) throw();				
				AlreadyInException & operator = (AlreadyInException const & rhs);				
				char const	*what(void) const throw() ;
		};
		


	private:
		SPAN(void);
		unsigned int _N;
		std::vector<int> _data;


};

# endif
