/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 12:26:08 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/14 15:53:37 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>


class Phonebook
{
public:
    Phonebook( void );
    bool    add( Contact contact );
    void    display( void ) const;
    Contact get_by_id( int id ) const;
    bool    is_full( void ) const;
    bool    is_empty( void ) const;
    int     get_size( void ) const;

private:
    Contact _contacts[8];
    int     _contacts_count;

};

#endif
