/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 16:24:15 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 16:50:25 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

# include <string>

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &w);
		~HumanA(void);

		void	attack(void) const;

	private:
		std::string _name;
		Weapon &_weapon;
};

#endif
