/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 12:44:03 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:38 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cfloat>
#include <cmath>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage:  " << argv[0] << " <string>" << std::endl;
		return (1);
	}
	std::string input(argv[1]);
	if (input.size() == 1 && (input[0] < '0' || input[0] > '9') && isprint(input[0])) // parameter is char
	{
		std::cout << "char: '" << input[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
	}
	else // parameter is number
	{
		double	number;
		//we take off the f at the end, 12.23f becomes 12.23
		if (input.size() > 1 && input.back() == 'f' && input[input.size() - 2] != 'n' )
			input.resize(input.size() - 1);
		//for nanf		
		if ( !input.compare("nanf"))
			input.resize(input.size() - 1);		

		std::stringstream	ss(input);

		ss >> number;
		if (ss.fail() || !ss.eof())
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return (0);
		}

		//std::cout << "number = " << number << std::endl;
		
		//char
		std::cout << "char: ";
		if (number > CHAR_MAX || number < 0 || !input.compare("nan"))
			std::cout << "impossible" << std::endl;
		else if (isprint(number))
			std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;

		//int 
		// nan != nan  nan < INT_MAX nan > INT_MIN; but inf == inf
		std::cout << "int: ";
		if (number > INT_MAX || number < INT_MIN  || number != number )
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(number) << std::endl;

		//float
		std::cout << "float: ";
		if ((number != 0) && (number > FLT_MAX || number < FLT_MIN) && number == number && !std::isinf(number))
			std::cout << "impossible" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(number) << "f" << std::endl;

		//double
		std::cout << "double: ";
		if ((number != 0) && (number > DBL_MAX || number < DBL_MIN) && number == number && !std::isinf(number))
			std::cout << "impossible" << std::endl;
		else
			std::cout <<  std::fixed << std::setprecision(1) << number << std::endl;
	}
}
