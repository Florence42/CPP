/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:37:18 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 17:25:45 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "OfficeBlock.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

OfficeBlock::OfficeBlock(void)
{}

OfficeBlock::OfficeBlock(OfficeBlock const &src)
{
	*this = src;
}

OfficeBlock::~OfficeBlock(void)
{}

OfficeBlock				&OfficeBlock::operator=(OfficeBlock const &rhs)
{
	(void)rhs;
	return (*this);
}

void OfficeBlock::setIntern( Intern const &intern )
{
	*_intern = intern;
}

void OfficeBlock::setSigner( Bureaucrat const & signer )
{
	*_signer = signer;
}

void OfficeBlock::setExecutor( Bureaucrat const & executor )
{
	*_executor = executor;
}


Form				*OfficeBlock::makeForm(std::string const &name, std::string const &target)
{
	Form			*form;

	if (name == "shrubbery creation")
		form = (Form *)new ShrubberyCreationForm(target);
	else if (name == "robotomy request")
		form = (Form *)new RobotomyRequestForm(target);
	else if (name == "presidential pardon")
		form = (Form *)new PresidentialPardonForm(target);
	else
	{
		std::cout << "OfficeBlock can't find the " << name << " form !" << std::endl;
		return (NULL);
	}
	std::cout << "OfficeBlock creates " << *form;
	return (form);
}

typedef OfficeBlock::NoInternException NoInternException;

NoInternException::NoInternException(void) {}

NoInternException::NoInternException(NoInternException const &) {}

NoInternException::~NoInternException(void) throw() {}

NoInternException &NoInternException::operator=(
		NoInternException const &
	)
{
	return *this;
}

const char *NoInternException::what(void) const throw()
{
	return "No intern";
}

typedef OfficeBlock::NoSignerException NoSignerException;

NoSignerException::NoSignerException(void) {}

NoSignerException::NoSignerException(NoSignerException const &) {}

NoSignerException::~NoSignerException(void) throw() {}

NoSignerException &NoSignerException::operator=(
		NoSignerException const &
	)
{
	return *this;
}

const char *NoSignerException::what(void) const throw()
{
	return "No signer";
}

typedef OfficeBlock::NoExecutorException NoExecutorException;

NoExecutorException::NoExecutorException(void) {}

NoExecutorException::NoExecutorException(NoExecutorException const &) {}

NoExecutorException::~NoExecutorException(void) throw() {}

NoExecutorException &NoExecutorException::operator=(
		NoExecutorException const &
	)
{
	return *this;
}

const char *NoExecutorException::what(void) const throw()
{
	return "No executor";
}


