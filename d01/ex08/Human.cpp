/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 07:37:48 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/22 07:32:13 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Human.hpp"

void Human::meleeAttack(std::string const &target)
{
	std::cout << "Melee Attack -> " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "Ranged Attack -> " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "Intimidating Shout -> " << target << std::endl;
}

typedef void(Human::* actionPtr) (std::string const &);

void Human::action(std::string const &action, std::string const &target)
{
	std::string names[3] = {
		"melee", "ranged", "intimidating"
	};

	actionPtr actions[3] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	for (int i = 0; i < 3; i++)
	{
		if (names[i].compare(action) == 0)
		{
			(this->*actions[i])(target);
		}
	}
}
