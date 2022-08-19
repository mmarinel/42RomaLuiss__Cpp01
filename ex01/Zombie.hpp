/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 19:49:01 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/19 23:07:33 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie	*newZombie( std::string name );
	Zombie	*randomChump( std::string name );
	void	announce( void );
	void	setName( std::string name);
			Zombie();
			Zombie( std::string name );
			~Zombie();
};

#endif