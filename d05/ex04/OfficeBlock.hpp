/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:36:58 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/30 17:22:47 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_CLASS_H
# define OFFICEBLOCK_CLASS_H

# include <string>
# include "OfficeBlock.hpp"
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "Intern.hpp"

class OfficeBlock
{
	public:
								OfficeBlock(void);
								~OfficeBlock(void);
								OfficeBlock(OfficeBlock const &src);
		OfficeBlock				&operator=(OfficeBlock const &rhs);

		void					doBureaucracy(std::string const &name, std::string const &target);

		void					setIntern(Intern const & intern);
		void					setSigner(Bureaucrat const & signer);
		void					setExecutor(Bureaucrat const & executor);

		Form					*makeForm(std::string const &name, std::string const &target);

		class NoInternException : public std::exception {
			public:
				NoInternException(void);
				NoInternException(NoInternException const &obj);
				~NoInternException(void) throw();

				NoInternException &operator=(NoInternException const &rhs);

				const char *what(void) const throw();
		};

		class NoExecutorException : public std::exception {
			public:
				NoExecutorException(void);
				NoExecutorException(NoExecutorException const &obj);
				~NoExecutorException(void) throw();

				NoExecutorException &operator=(NoExecutorException const &rhs);

				const char *what(void) const throw();
		};

		class NoSignerException : public std::exception {
			public:
				NoSignerException(void);
				NoSignerException(NoSignerException const &obj);
				~NoSignerException(void) throw();

				NoSignerException &operator=(NoSignerException const &rhs);

				const char *what(void) const throw();
		};


	private :
	    Intern                  *_intern;
		Bureaucrat				*_signer;
		Bureaucrat				*_executor;
		

};

#endif

