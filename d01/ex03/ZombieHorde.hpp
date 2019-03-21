/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:20:47 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 15:31:43 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

#define TYPE_COUNT 4
#define NAME_COUNT 5


class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde(void);

	void	announce(void);

private:
		int					_count;
		Zombie				*_zombies;
		static std::string	_types[TYPE_COUNT];
		static std::string	_names[NAME_COUNT];
	
		
};

#endif 

