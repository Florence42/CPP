/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:01:29 by frivaton          #+#    #+#             */
/*   Updated: 2019/04/03 14:33:54 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
typename T::iterator		easyfind(T &container, int data)
{
	typename T::iterator	it = container.begin();
	typename T::iterator	it_end = container.end();

	while (it != it_end)
	{
		if (*it == data)
			return (it);
		++it;
	}
	return (it_end);
}




















# endif

