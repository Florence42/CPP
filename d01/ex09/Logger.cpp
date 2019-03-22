/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 07:33:34 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/22 08:07:30 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string filename) : _filename(filename) {}
Logger::~Logger(void) {}

void Logger::logToFile(std::string const &message)
{
	std::ofstream ofs(this->_filename);

	ofs << makeLogEntry(message);

	ofs.close();
}

void Logger::logToConsole(std::string const &message)
{
	std::cout << makeLogEntry(message);
}

std::string Logger::makeLogEntry(std::string const &message) const
{
	std::stringstream ss;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	ss << "["
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_mday << "/"
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_mon + 1 << "/"
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_year + 1900 << " "
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_hour << ":"
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_min
		<< "] " << message << std::endl;

	return ss.str();
}

typedef void(Logger::* logAction) (std::string const &);

void Logger::log(std::string const &dest, std::string const &message)
{
	std::string names[2] = {
		"file", "console"
	};

	logAction actions[2] = {
		&Logger::logToFile, &Logger::logToConsole
	};

	for (int i = 0; i < 2; i++)
	{
		if (names[i].compare(dest) == 0)
			(this->*actions[i])(message);
	}
}
