/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 16:25:25 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/27 19:34:44 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
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


	ScavTrap sportymark("SportyMark");
	ScavTrap sportyjo("SportyJo");	

	sportyjo.challengeNewcomer(rubber.getName());
	sportyjo.challengeNewcomer(sportymark.getName());
	sportymark.challengeNewcomer(repulsive.getName());
	sportymark.challengeNewcomer(rubber.getName());

	sportyjo.rangedAttack(rubber.getName());
	rubber.takeDamage(sportyjo.getRangedAttackDamage());

	rubber.vaulthunter_dot_exe(sportyjo.getName());
	sportyjo.takeDamage(rubber.getEnergyAttackDamage());

	rubber.meleeAttack(repulsive.getName());
	repulsive.takeDamage(sportymark.getMeleeAttackDamage());

	std::cout << rubber.getName() << " has " << rubber.getHitPoints() << " health left." << std::endl;
	std::cout << repulsive.getName() << " has " << repulsive.getHitPoints() << " health left." << std::endl;
	std::cout << sportyjo.getName() << " has " << sportyjo.getHitPoints() << " health left." << std::endl;
	std::cout << sportymark.getName() << " has " << sportymark.getHitPoints() << " health left." << std::endl;
}

