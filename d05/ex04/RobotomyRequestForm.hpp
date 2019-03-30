/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 13:28:43 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 13:29:35 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_CLASS_H
# define ROBOTOMYREQUESTFORM_CLASS_H

# include <string>
# include "RobotomyRequestForm.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string				_target;

	public:
								RobotomyRequestForm(std::string const &target);
								~RobotomyRequestForm(void);
								RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm		&operator=(RobotomyRequestForm const &rhs);

		void					beExecuted(void);

		std::string	const		&getTarget(void) const;
};

#endif
