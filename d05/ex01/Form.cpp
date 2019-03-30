/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:31:48 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/29 13:01:46 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form( std::string const & name, int gradeToSign, int gradeToExec) :
 _name( name ) , _GradetoSign(gradeToSign), _GradeToExec(gradeToExec), _signed(false)
{
    if ( gradeToSign < 1 )
       throw Form::GradeTooHighException();
    if ( gradeToSign > 150 )
        throw Form::GradeTooLowException();
    if ( gradeToExec < 1 )
       throw Form::GradeTooHighException();
    if ( gradeToExec > 150 )
        throw Form::GradeTooLowException();
}

Form::Form( Form const & src ) 
{
    *this = src;
}

Form::~Form( void ) {}

Form&		Form::operator=(Form const & rhs)
{
    
    this->_name = rhs._name;
    this->_GradetoSign = rhs._GradetoSign;
    this->_GradeToExec = rhs._GradeToExec;
    this->_signed = rhs._signed;
	return *this;
}


void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->_GradetoSign)
		throw Form::GradeTooLowException();

	this->_signed = true;
}

std::string	const			&Form::getName(void) const { return (this->_name); }
bool            			Form::getSigned(void) const { return (this->_signed); }
int							Form::getGradeToSign(void) const { return (this->_GradetoSign); }
int							Form::getGradeToExec(void) const { return (this->_GradeToExec); }

std::ostream				&operator<<(std::ostream &os, Form const &form)
{
	os	<< form.getName() << ", ";
	if (!form.getSigned())
		os << "not ";
	os	<< "signed, min sign grade : " << form.getGradeToSign() 
		<< ", min execution grade : " << form.getGradeToExec() << std::endl;
	return (os);
}


Form::GradeTooHighException::GradeTooHighException( void ) 
{
    return ;
}

Form::GradeTooHighException::GradeTooHighException( GradeTooHighException  const & e ) 
{
    *this = e;
    return ;
}

Form::GradeTooHighException::~GradeTooHighException( void ) throw() 
{
    return ;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator = ( Form::GradeTooHighException const & rhs )
{
    std::exception::operator=(rhs);
    return *this;
}

const char * Form::GradeTooHighException::what() const throw() 
{
    return ( "Grade is too high !");
}

Form::GradeTooLowException::GradeTooLowException( void )
{
    return ;
}

Form::GradeTooLowException::GradeTooLowException( GradeTooLowException const & e ) 
{
    *this = e;
    return ;
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw()
{
    return ;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator = ( Form::GradeTooLowException const & rhs )
{
    std::exception::operator=(rhs);
    return *this;
}

const char * Form::GradeTooLowException::what() const throw() 
{
    return ("Grade is too low !");
}






