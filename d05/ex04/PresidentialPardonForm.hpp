/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 13:32:27 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 13:33:09 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_CLASS_H
# define PRESIDENTIALPARDONFORM_CLASS_H

# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string				_target;

	public:
								PresidentialPardonForm(std::string const &target);
								~PresidentialPardonForm(void);
								PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

		void					beExecuted(void);

		std::string	const		&getTarget(void) const;
};

#endif
