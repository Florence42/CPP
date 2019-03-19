/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 13:12:33 by frivaton          #+#    #+#             */
/*   Updated: 2019/03/19 14:10:10 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap( void )
{
	Pony *pony = new Pony("OntheHeap", "Black & White");
	pony->display();
	delete pony;
}

void	 ponyOnTheStack( void )
{
	Pony pony("OntheStack", "Redish");
	pony.display();
}


int main(void)
{
	std::cout << "Calling ponyOnTheHeap()" << std::endl;
	ponyOnTheHeap();
	std::cout << "Returned from ponyOnTheHeap()" << std::endl;
	std::cout << std::endl;
	std::cout << "Calling ponyOnTheStack()" << std::endl;
	ponyOnTheStack();
	std::cout << "Returned from ponyOnTheStack()" << std::endl;

}
