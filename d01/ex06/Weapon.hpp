/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 16:23:43 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 16:50:03 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

# include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string getType(void) const;
		void setType(std::string type);

	private:
		std::string _type;
};

#endif 
