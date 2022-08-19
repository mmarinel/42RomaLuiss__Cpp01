/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 19:52:03 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/19 23:23:34 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "../colors.hpp"
#include <iostream>

void	Zombie::announce( void )
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie( std::string name )
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	return (new_zombie);
}

Zombie	*Zombie::randomChump( std::string name )
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	new_zombie->announce();
	return (new_zombie);
}

void	Zombie::setName( std::string name)
{
	this->name.assign(name);
}

Zombie::Zombie( std::string name )
{
	this->name.assign(name);
}

Zombie::Zombie()
{
	this->name = std::string();
}

Zombie::~Zombie()
{
	std::cout << this->name << ": " << RED "killed" RESET << std::endl;
}
