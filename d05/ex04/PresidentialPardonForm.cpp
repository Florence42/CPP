/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 13:32:40 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 13:34:01 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	Form("Presidential Pardon Form", 25, 5),
	_target(target)
{
	srand(time(NULL));
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
	Form("Presidential Pardon Form", 25, 5)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

void						PresidentialPardonForm::beExecuted(void)
{
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::string const			&PresidentialPardonForm::getTarget(void) const { return (this->_target); }
