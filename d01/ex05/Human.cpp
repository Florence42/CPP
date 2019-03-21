/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 16:02:34 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 16:09:43 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void) {}
Human::~Human(void) {}

const Brain &Human::getBrain(void) const
{
	return this->_brain;
}

std::string Human::identify(void) const
{
	return this->_brain.identify();
}
