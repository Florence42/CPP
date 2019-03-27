/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 16:25:00 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/27 19:02:17 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) :
	_name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "<FR4G-TP> Creation of : " << name << " in Starbound" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs) :
	_name(rhs._name)
{
	*this = rhs;
	std::cout << "<FR4G-TP>  Copy cat of : " << rhs._name << " in Starbound" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "<FR4G-TP> Now just died : " << this->_name << " sorry...." << std::endl;
}

FragTrap		& FragTrap::operator=(const FragTrap &rhs)
{
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	this->_energyAttackDamage = rhs.getEnergyAttackDamage();
	return (*this);
}

unsigned int		FragTrap::getHitPoints(void) const { return (this->_hitPoints); }
unsigned int		FragTrap::getMaxHitPoints(void) const { return (this->_maxHitPoints); }
unsigned int		FragTrap::getEnergyPoints(void) const { return (this->_energyPoints); }
unsigned int		FragTrap::getMaxEnergyPoints(void) const { return (this->_maxEnergyPoints); }
unsigned int		FragTrap::getLevel(void) const { return (this->_level); }
std::string			FragTrap::getName(void) const { return (this->_name); }
unsigned int		FragTrap::getMeleeAttackDamage(void) const { return (this->_meleeAttackDamage); }
unsigned int		FragTrap::getRangedAttackDamage(void) const { return (this->_rangedAttackDamage); }
unsigned int		FragTrap::getArmorDamageReduction(void) const { return (this->_armorDamageReduction); }
unsigned int		FragTrap::getEnergyAttackDamage(void) const { return (this->_energyAttackDamage); }


void	FragTrap::rangedAttack(std::string const & target) 
{
	std::cout << "<FR4G-TP>: " << this->_name << " Ranged attacks " << target << " causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const & target) 
{
	std::cout << "<FR4G-TP>: " << this->_name << " Melee attacks " << target << " causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "<FR4G-TP>: " << this->_name << " Before Damage has " << this->_hitPoints << " points of damage !" << std::endl;
	if (this->_hitPoints < amount - this->_armorDamageReduction) {
		std::cout << "<FR4G-TP>: " << this->_name << " takes " << this->_hitPoints << " points of damage !" << std::endl;
		this->_hitPoints = 0;
	}
	else {
		std::cout << "<FR4G-TP>: " << this->_name << " takes " << amount - this->_armorDamageReduction << " points of damage !" << std::endl;
		this->_hitPoints -= amount - this->_armorDamageReduction;
	}
	std::cout << "<FR4G-TP>: " << this->_name << " After Damage has " << this->_hitPoints << " points of damage !" << std::endl;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints + amount > this->_maxHitPoints) {
		std::cout << "<FR4G-TP>: " << this->_name << " takes " << this->_maxHitPoints - this->_hitPoints << " points of repairs !" << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		std::cout << "<FR4G-TP>: " << this->_name << " takes " << amount << " points of repairs !" << std::endl;
		this->_hitPoints += amount;
	}
	std::cout << "<FR4G-TP>: " << this->_name << " After Repaired has " << this->_hitPoints << " points of hit!" << std::endl;
	return ;
}


void	FragTrap::smallgun(std::string const &target)
{
	std::cout << "<FR4G-TP>: " << this->_name << " uses SMALL GUN against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::wildgun(std::string const &target)
{
	std::cout << "<FR4G-TP>: " << this->_name << " uses WILD GUN against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::heavygun(std::string const &target)
{
	std::cout << "<FR4G-TP>: " << this->_name << " uses HEAVY GUN against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::lightgun(std::string const &target)
{
	std::cout << "<FR4G-TP>: " << this->_name << " uses LIGHT GUN against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::nogun(std::string const &target)
{
	std::cout << "<FR4G-TP>: " << this->_name << " uses NO GUN against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		index;
	void	(FragTrap::*attacks[5])(std::string const &target);

	attacks[0] = &FragTrap::smallgun;
	attacks[1] = &FragTrap::wildgun;
	attacks[2] = &FragTrap::heavygun;
	attacks[3] = &FragTrap::lightgun;
	attacks[4] = &FragTrap::nogun;

	index = rand() % 5;
	this->_energyAttackDamage = 7 + (int)index ;
	if (this->_energyAttackDamage > 100)
		this->_energyAttackDamage = 100;

	if (25 < this->_energyPoints)
		(this->*attacks[index])(target);
	else
		std::cout << "<FR4G-TP>: " << this->_name << " doesn't have enough energy !" << std::endl;
	std::cout << "<FR4G-TP>: " << this->_name << " After Random has " << this->_energyPoints << " points of energy!" << std::endl;
	return ;
}

