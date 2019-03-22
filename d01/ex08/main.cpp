/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 07:37:59 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/21 08:14:48 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
	Human h;

	std::string target = "I am a real fighter";

	h.action("melee", target);
	h.action("ranged", target);
	h.action("intimidating", target);
}

