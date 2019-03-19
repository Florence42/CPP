/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:20:01 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 17:00:30 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string type, std::string name): _type(type), _name(name)
{
	//std::cout << "The " << this->_type << " Zombie " <<  this->_name  <<  " is alive" << std::endl;
	this->announce();
}

Zombie::~Zombie( void)
{	
	std::cout << "<" << this->_type << " (" << this->_name << ")>  It's midnight... bye bye" << std::endl;
	
}

void Zombie::announce( void)
{	
	std::cout << "<" << this->_type << " (" << this->_name << ")>  Braiiinnnsss" << std::endl;
		
}

std::string Zombie::getName(void) const
{
	return this->_name;
}

std::string Zombie::getType(void) const
{
	return this->_type;
}

