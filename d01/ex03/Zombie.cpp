/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:20:01 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 15:43:26 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) {}

Zombie::~Zombie( void)
{	
	std::cout << "<" << this->_type << " (" << this->_name << ")>  It's midnight... bye bye" << std::endl;
	
}

void Zombie::announce( void)
{	
	std::cout << "<" << this->_type << " (" << this->_name << ")>  Braiiinnnsss" << std::endl;
		
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::setType(std::string type)
{
	this->_type = type;
}


std::string Zombie::getName(void) const
{
	return this->_name;
}

std::string Zombie::getType(void) const
{
	return this->_type;
}

