/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 15:57:50 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 15:58:55 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPtr = &brain;
	std::string &brainRef = brain;

	std::cout << *brainPtr << std::endl;
	std::cout << brainRef << std::endl;
}


