/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:32:08 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/29 13:00:48 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat( std::string const & name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );

		Bureaucrat & operator=( Bureaucrat const & rhs );

		std::string	const		&getName(void) const;
		int						getGrade(void) const;

		void incrementGrade( void );		
		void decrementGrade( void );		

		class GradeTooHighException : public std::exception 
		{
        public:
            GradeTooHighException( void );
            GradeTooHighException( GradeTooHighException const & e );
            ~GradeTooHighException( void ) throw();

            GradeTooHighException & operator = ( GradeTooHighException const & rhs );

            virtual const char * what() const throw();
    	};

    class GradeTooLowException : public std::exception
		{
        public:
            GradeTooLowException( void );
            GradeTooLowException( GradeTooLowException const & e );
            ~GradeTooLowException( void ) throw();

            GradeTooLowException & operator = ( GradeTooLowException const & rhs );

            virtual const char * what() const throw();
    	};


		
	private:
		std::string		_name;
		int				_grade;
	
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &bureaucrat);


# endif
