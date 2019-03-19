/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:20:12 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 14:55:30 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
public:
	Zombie( std::string type, std::string name );
	~Zombie( void );

	std::string	getName() const;
	std::string	getType() const;
	void		announce( void );

private:
	std::string	_type;
	std::string	_name;
		
};

#endif 

