/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 12:25:29 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 12:25:28 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

int     get_code(std::string response)
{
    if (response == "ADD")
        return 0;
    else if (response == "SEARCH")
        return 1;
    else if (response == "EXIT")
        return 2;
    else
        return -1;
}

int     get_index(std::string response, int max)
{
    if (response.length() != 1 || response[0] < '1' || response[0] > '8')
        return (-1);
    int id = std::stoi(response);
    if (id > max || id <= 0)
        return (-1);
    return (id - 1);
}

// prompt user for add contact, gather info and add contact to phonebook
void    prompt_add( Phonebook *pb )
{
    if (pb->is_full())
    {
        std::cout << "Your contact list is full ..." << std::endl;
        return;
    }
    Contact contact;
    std::cout << "Enter info about the contact:" << std::endl;

    std::cout << "First name: ";
	std::getline(std::cin, contact.first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, contact.last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, contact.nickname);
	std::cout << "Login: ";
	std::getline(std::cin, contact.login);
	std::cout << "Postal address: ";
	std::getline(std::cin, contact.postal_address);
	std::cout << "Email address: ";
	std::getline(std::cin, contact.email_address);
	std::cout << "Phone number: ";
	std::getline(std::cin, contact.phone_number);
	std::cout << "Birthday date: ";
	std::getline(std::cin, contact.birthday_date);
	std::cout << "Favorite meal: ";
	std::getline(std::cin, contact.favorite_meal);
	std::cout << "Underwear color: ";
	std::getline(std::cin, contact.underwear_color);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, contact.darkest_secret);


    pb->add(contact);
}

// Prompt user for search contact, get index and display info about this contact
void    prompt_search( Phonebook *pb )
{
    if (pb->is_empty())
    {
        std::cout << "Right now your phone book is empty" << std::endl;
        return;
    }
    pb->display();

    std::string response;
    std::cout << "Choose index: ";
    std::getline(std::cin, response);

    int id = get_index(response, pb->get_size());
    if (id == -1)
    {
        std::cout << "Sorry you entred a bad index" << std::endl;
        return;
    }
    Contact contact = pb->get_by_id(id);

    std::cout << "First name: " << contact.first_name << std::endl;
	std::cout << "Last name: " << contact.last_name << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Login: " << contact.login << std::endl;
	std::cout << "Postal address: " << contact.postal_address << std::endl;
	std::cout << "Email address: " << contact.email_address << std::endl;
	std::cout << "Phone number: " << contact.phone_number << std::endl;
	std::cout << "Birthday date: " << contact.birthday_date << std::endl;
	std::cout << "Favorite meal: " << contact.favorite_meal << std::endl;
	std::cout << "Underwear color: " << contact.underwear_color << std::endl;
	std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
}



int     main( void )
{
    Phonebook pb;
    std::string response;
    int code = 0;

    std::cout << "Welcome to Nicephonebook!" << std::endl;
    while ( code != 2 )
    {
        
        std::cout << std::endl << "Available commands: ADD    -> for a new contact.";
        std::cout << std::endl << "                    SEARCH -> to search a contact." ;
        std::cout << std::endl << "                    EXIT   -> bye bye" << std::endl ;
        std::getline(std::cin, response);
        code = get_code(response);
        switch (code)
        {
            case 0:
    			prompt_add(&pb);
                break;
            case 1:
                prompt_search(&pb);
                break;
            case 2:
                return 0;
            default:
                std::cout << "Your input is not correct ..." << std::endl;
        }
    }
}
