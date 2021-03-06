/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:20:47 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 15:26:21 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void setZombieType(std::string type);
	Zombie* newZombie( std::string name );
	void randomChump(void);

private:
	std::string	_type;
	std::string	_name;
	static std::string _names[5];
	
		
};

#endif 

