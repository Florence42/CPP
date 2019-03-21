/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 16:02:05 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 16:06:48 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>

#include "Brain.hpp"

Brain::Brain(void) {}
Brain::~Brain(void) {}

std::string Brain::identify(void) const
{
	std::stringstream ss;
	ss << (void *)this;
	return ss.str();
}
