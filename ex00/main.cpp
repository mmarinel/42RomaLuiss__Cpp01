/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:26:50 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/03 11:30:44 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.hpp"

int main( void )
{
	Zombie	*frolp;
	Zombie	*sdrom;

	randomChump("Duffthug");
	randomChump("Ratnob");
	frolp = newZombie("frolp");
	frolp->announce();
	sdrom = newZombie("sdrom");
	sdrom->announce();
	randomChump("Grishnákh");
	delete frolp;
	delete sdrom;
	return (0);
}
