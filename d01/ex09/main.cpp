/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 07:33:59 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/22 07:44:44 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void)
{
	Logger logger("log.txt");

	logger.log("console", "Program starting");
	logger.log("file", "Program starting (file)");
	logger.log("console", "done");
}


