/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 12:25:29 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 12:44:08 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook( void )
{
    this->_contacts_count = 0;
}

bool    Phonebook::add( Contact contact )
{
    if (this->_contacts_count == 8)
        return false;
    int id = this->_contacts_count;
    this->_contacts[id] = contact;
    this->_contacts_count++;
    return true;
}

bool    Phonebook::is_full( void ) const
{
    if (this->_contacts_count == 8)
        return true;
    return false;
}

bool    Phonebook::is_empty( void ) const
{
    if (this->_contacts_count == 0)
        return true;
    return false;
}

int     Phonebook::get_size( void ) const
{
    return (this->_contacts_count);
}

void    Phonebook::display( void ) const
{
    std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
    for (int id = 0; id < this->_contacts_count; id++)
    {
        std::cout << std::setw(10) << id + 1 << std::setfill(' ') << "|";

        std::string first_name = this->_contacts[id].first_name;
        if (first_name.size() > 10)
            first_name = first_name.substr(0, 9) + ".";
        std::cout << std::setw(10) << first_name << std::setfill(' ') << "|";

        std::string last_name = this->_contacts[id].last_name;
        if (last_name.size() > 10)
            last_name = last_name.substr(0, 9) + ".";
        std::cout << std::setw(10) << last_name << std::setfill(' ') << "|";

        std::string nickname = this->_contacts[id].nickname;
        if (nickname.size() > 10)
            nickname = nickname.substr(0, 9) + ".";
        std::cout << std::setw(10) << nickname << std::setfill(' ') << std::endl;
    }
    std::cout << std::endl;
}

Contact Phonebook::get_by_id( int id ) const
{
    return this->_contacts[id];
}

