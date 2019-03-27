/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 18:08:38 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/27 19:30:43 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(const std::string name) :
	_name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "<SC4G-TP> Creation of : " << name << " in Starbound" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) :
	_name(rhs._name)
{
	*this = rhs;
	std::cout << "<SC4G-TP>  Copy cat of : " << rhs._name << " in Starbound" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "<SC4G-TP> Now just died : " << this->_name << " sorry...." << std::endl;
}

ScavTrap		& ScavTrap::operator=(const ScavTrap &rhs)
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

unsigned int		ScavTrap::getHitPoints(void) const { return (this->_hitPoints); }
unsigned int		ScavTrap::getMaxHitPoints(void) const { return (this->_maxHitPoints); }
unsigned int		ScavTrap::getEnergyPoints(void) const { return (this->_energyPoints); }
unsigned int		ScavTrap::getMaxEnergyPoints(void) const { return (this->_maxEnergyPoints); }
unsigned int		ScavTrap::getLevel(void) const { return (this->_level); }
std::string			ScavTrap::getName(void) const { return (this->_name); }
unsigned int		ScavTrap::getMeleeAttackDamage(void) const { return (this->_meleeAttackDamage); }
unsigned int		ScavTrap::getRangedAttackDamage(void) const { return (this->_rangedAttackDamage); }
unsigned int		ScavTrap::getArmorDamageReduction(void) const { return (this->_armorDamageReduction); }
unsigned int		ScavTrap::getEnergyAttackDamage(void) const { return (this->_energyAttackDamage); }


void	ScavTrap::rangedAttack(std::string const & target) 
{
	std::cout << "<SC4G-TP>: " << this->_name << " Ranged attacks " << target << " causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target) 
{
	std::cout << "<SC4G-TP>: " << this->_name << " Melee attacks " << target << " causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "<SC4G-TP>: " << this->_name << " Before Damage has " << this->_hitPoints << " points of damage !" << std::endl;
	if (this->_hitPoints < amount - this->_armorDamageReduction) {
		std::cout << "<SC4G-TP>: " << this->_name << " takes " << this->_hitPoints << " points of damage !" << std::endl;
		this->_hitPoints = 0;
	}
	else {
		std::cout << "<SC4G-TP>: " << this->_name << " takes " << amount - this->_armorDamageReduction << " points of damage !" << std::endl;
		this->_hitPoints -= amount - this->_armorDamageReduction;
	}
	std::cout << "<SC4G-TP>: " << this->_name << " After Damage has " << this->_hitPoints << " points of damage !" << std::endl;
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints + amount > this->_maxHitPoints) {
		std::cout << "<SC4G-TP>: " << this->_name << " takes " << this->_maxHitPoints - this->_hitPoints << " points of repairs !" << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		std::cout << "<SC4G-TP>: " << this->_name << " takes " << amount << " points of repairs !" << std::endl;
		this->_hitPoints += amount;
	}
	std::cout << "<SC4G-TP>: " << this->_name << " After Repaired has " << this->_hitPoints << " points of hit!" << std::endl;
	return ;
}


void	ScavTrap::playtennis(std::string const &target)
{
	std::cout << "<SC4G-TP>: " << this->_name << " Plays Tennis against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::playsoccer(std::string const &target)
{
	std::cout << "<SC4G-TP>: " << this->_name << " Plays Soccer against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::dojogging(std::string const &target)
{
	std::cout << "<SC4G-TP>: " << this->_name << " Joggs against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::doskiing(std::string const &target)
{
	std::cout << "<SC4G-TP>: " << this->_name << " Does Ski competion against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::dosnoring(std::string const &target)
{
	std::cout << "<SC4G-TP>: " << this->_name << " Does Snoring competition against " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int		index;
	void	(ScavTrap::*challenges[5])(std::string const &target);

	challenges[0] = &ScavTrap::playtennis;
	challenges[1] = &ScavTrap::playsoccer;
	challenges[2] = &ScavTrap::dojogging;
	challenges[3] = &ScavTrap::doskiing;
	challenges[4] = &ScavTrap::dosnoring;

	index = rand() % 5;
	if (25 <= this->_energyPoints)
		(this->*challenges[index])(target);
	else
		std::cout << "Starbound: " << this->_name << " doesn't have enough energy !" << std::endl;
	return ;
}


