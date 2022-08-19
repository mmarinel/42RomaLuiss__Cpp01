/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:26:50 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/19 22:42:32 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main( void )
{
	Zombie	gorg("gorg");
	Zombie	*frolp;
	Zombie	*sdrom;

	gorg.announce();
	frolp = gorg.newZombie("frolp");
	sdrom = gorg.randomChump("sdrom");
	frolp->announce();
	delete frolp;
	delete sdrom;
	return (0);
}
