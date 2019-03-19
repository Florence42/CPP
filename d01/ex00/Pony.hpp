/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 13:12:20 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 14:25:03 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
	public:
		Pony(std::string name, std::string color);
		~Pony(void);
		void display(void);
		

	private:
		std::string	_name;
		std::string _color;
		
};

#endif // PONY_CLASS_H
