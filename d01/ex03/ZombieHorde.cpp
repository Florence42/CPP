/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:20:31 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 15:54:23 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _count(n)
{
	this->_zombies = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		_zombies[i].setType(ZombieHorde::_types[std::rand() % TYPE_COUNT]);
		_zombies[i].setName(ZombieHorde::_names[std::rand() % NAME_COUNT]);
	}
};

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
};

void ZombieHorde::announce(void) 
{
	for (int i = 0; i < this->_count; i++)
		_zombies[i].announce();
}

std::string ZombieHorde::_types[TYPE_COUNT] = {
	"Tired",
	"Fresh",
	"Exhausted",
	"Sleepy",
};

std::string ZombieHorde::_names[NAME_COUNT] = {
	"Flo",
	"Marcel",
	"Luc",
	"Gerard",
	"Louison"
};
