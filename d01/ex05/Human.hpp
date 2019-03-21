/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 16:02:46 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/20 16:08:08 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

# include "Brain.hpp"

class Human
{
	public:
		Human(void);
		~Human(void);

		const Brain &getBrain() const;
		std::string identify() const;

	private:
		const Brain _brain;
};

#endif 

