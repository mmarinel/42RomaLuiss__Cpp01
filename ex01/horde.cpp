/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   horde.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:07:58 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/19 23:19:56 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie	*zombieHorde( unsigned int N, std::string name )
{
	Zombie	*horde = new Zombie[N];

	for (unsigned int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
