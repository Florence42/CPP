/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 07:33:47 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/22 07:38:33 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_CLASS_H
# define LOGGER_CLASS_H

# include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <ctime>
#include <iomanip>

class Logger
{
	public:
		Logger(std::string filename);
		~Logger(void);

		void log(std::string const &dest, std::string const &message);
	private:
		void logToFile(std::string const &message);
		void logToConsole(std::string const &message);
		std::string makeLogEntry(std::string const &message) const;

		std::string _filename;
};

#endif

