/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:32:08 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/29 13:00:48 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H

# include <string>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form( std::string const & name, int gradeToSign, int gradeToExec );
		Form( Form const & src );
		~Form( void );
		Form & operator=( Form const & rhs );

		std::string	const		&getName(void) const;
		bool						getSigned(void) const;
		int						getGradeToSign(void) const;
		int						getGradeToExec(void) const;
		
		void               		beSigned(Bureaucrat const &b);
		void 					execute(Bureaucrat const &b);

		
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

		class	NotSignedException: public std::exception
		{
			public:
				NotSignedException(void);
				NotSignedException(NotSignedException const & e);
				~NotSignedException(void) throw();
				
				NotSignedException & operator = (NotSignedException const & rhs);

				virtual const char *what() const throw();
		};


		
	private:
		std::string		_name;			
		int				_GradetoSign;
		int				_GradeToExec;
		bool 			_signed;
		virtual void	beExecuted(void);
	
};

std::ostream	&operator<<(std::ostream &os, Form const &form);


# endif
