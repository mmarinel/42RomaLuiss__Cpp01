/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 19:49:01 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/19 22:41:41 by mmarinel         ###   ########.fr       */
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
			Zombie( std::string name );
			~Zombie();
};

#endif