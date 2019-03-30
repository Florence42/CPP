/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 13:29:02 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 15:12:16 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Form.hpp"
#include <time.h>
#include <stdlib.h>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("Robotomy Request Form", 72, 45),
	_target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
	Form("Robotomy Request Form", 72, 45)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm			&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

void						RobotomyRequestForm::beExecuted(void)
{
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << "There is a failure in the robotomized process ... !" << std::endl;
}

std::string const			&RobotomyRequestForm::getTarget(void) const { return (this->_target); }
