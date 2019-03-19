/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 17:06:31 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 07:32:40 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include <iostream>


void megaphone(int argc, char *argv[])
{
    for (int i = 1; i < argc; i += 1)
    {
        for (int j = 0; j < (int)strlen(argv[i]); j += 1)
        {
            std::cout << (char)toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
}


int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        megaphone(argc, argv);
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}
