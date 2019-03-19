/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:20:31 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 16:43:40 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{};

ZombieEvent::~ZombieEvent(void)
{};

std::string ZombieEvent::_names[5] = {
	"Flo",
	"Georges",
	"Marc",
	"Lucille",
	"Franc"
};

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;	
}

Zombie *ZombieEvent::newZombie(std::string name) 
{
	return new Zombie(name, this->_type);
}

void ZombieEvent::randomChump(void)
{

	Zombie z = Zombie(ZombieEvent::_names[std::rand() % 5], this->_type);
	
}
