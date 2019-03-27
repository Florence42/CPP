/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 16:25:25 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/27 18:36:49 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <time.h>

int main( void )
{
	srand(time(0));

	FragTrap rubber("RubberGlue");
	FragTrap repulsive("Repulsive");
	
	for (int i = 0; i < 8; i++)
		rubber.takeDamage(20);
    
	for (int i = 0; i < 7; i++)
		rubber.beRepaired(20);

	rubber.meleeAttack(repulsive.getName());
	repulsive.takeDamage(rubber.getMeleeAttackDamage());

	repulsive.rangedAttack(rubber.getName());
	rubber.takeDamage(repulsive.getRangedAttackDamage());

	for (int i = 0; i < 10; i++)
		rubber.vaulthunter_dot_exe(repulsive.getName());

	std::cout << rubber.getName() << " has " << rubber.getEnergyPoints() << " energy left." << std::endl;
	std::cout << repulsive.getName() << " has " << repulsive.getEnergyPoints() << " energy left." << std::endl;
	std::cout << rubber.getName() << " has " << rubber.getHitPoints() << " hit points left." << std::endl;
	std::cout << repulsive.getName() << " has " << repulsive.getHitPoints() << " hit points left." << std::endl;
		
}

