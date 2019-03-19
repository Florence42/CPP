/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 13:11:55 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 14:04:32 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( std::string name, std::string color): _name(name), _color(color)
{
	std::cout << "The " << this->_color << " horse " <<  this->_name  <<  " is alive" << std::endl;
	
}

Pony::~Pony( void)
{	
	std::cout << "The " << this->_color << " horse " <<  this->_name  <<  " is dead" << std::endl;
		
}

void Pony::display( void)
{	
	std::cout << "The " << this->_color << " horse " <<  this->_name  <<  " is in the garden" << std::endl;
		
}
