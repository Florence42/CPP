/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:51:16 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 15:52:24 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_H
# define INTERN_CLASS_H

# include <string>
# include "Intern.hpp"
# include "Form.hpp"

class Intern
{
	public:
								Intern(void);
								~Intern(void);
								Intern(Intern const &src);
		Intern					&operator=(Intern const &rhs);

		Form					*makeForm(std::string const &name, std::string const &target);
};

#endif
