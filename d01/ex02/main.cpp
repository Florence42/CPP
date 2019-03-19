/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:21:16 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 17:07:29 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int main(void)
{
ZombieEvent event;

	event.setZombieType("Parents");
	Zombie *zombie = event.newZombie("Mummy");
	Zombie *zombie2 = event.newZombie("Daddy");
	
	std::cout << "Now the kids are out :" << std::endl;

	event.setZombieType("Child");
	for (int i = 0; i < 10; i++)
		event.randomChump();

	delete zombie;
	delete zombie2;
}
