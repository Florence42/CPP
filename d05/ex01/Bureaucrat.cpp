/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:31:48 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/29 13:01:46 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat( std::string const & name, int grade ) : _name( name ) 
{
    if ( grade < 1 )
       throw Bureaucrat::GradeTooHighException();
    if ( grade > 150 )
        throw Bureaucrat::GradeTooLowException();
    else 
	{
        this->_grade = grade;        
    }    
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) 
{
    *this = src;
}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const & rhs)
{
    this->_name = rhs._name;
    this->_grade = rhs._grade;
	return *this;
}

void Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

void Bureaucrat::signForm(Form &form)
{
    if (form.getSigned())
	{
		std::cout << this->_name << " cannot sign " << form.getName()
			<< " because it is already signed." << std::endl;
		return;
	}
	try
	{
		form.beSigned( *this);
		std::cout << this->_name
			<< " signs " << form.getName()
			<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name
			<< " cannot sign" << form.getName()
			<< " because " << e.what()
			<< std::endl;
	}
}


std::string	const			&Bureaucrat::getName(void) const { return (this->_name); }
int							Bureaucrat::getGrade(void) const { return (this->_grade); }

std::ostream				&operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << bureaucrat.getName()
		<< ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}


Bureaucrat::GradeTooHighException::GradeTooHighException( void ) 
{
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException( GradeTooHighException  const & e ) 
{
    *this = e;
    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw() 
{
    return ;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator = ( Bureaucrat::GradeTooHighException const & rhs )
{
    std::exception::operator=(rhs);
    return *this;
}

const char * Bureaucrat::GradeTooHighException::what() const throw() 
{
    return ( "Cannot increment grade, Bureaucrat too high !");
}

Bureaucrat::GradeTooLowException::GradeTooLowException( void )
{
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( GradeTooLowException const & e ) 
{
    *this = e;
    return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw()
{
    return ;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator = ( Bureaucrat::GradeTooLowException const & rhs )
{
    std::exception::operator=(rhs);
    return *this;
}

const char * Bureaucrat::GradeTooLowException::what() const throw() 
{
    return ("Cannot decrement grade, Bureaucrat too low !");
}






