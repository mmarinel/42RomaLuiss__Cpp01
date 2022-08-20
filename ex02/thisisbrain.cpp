/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thisisbrain.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:46:03 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/20 10:53:02 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void )
{
	std::string	salut = "HI THIS IS BRAIN";
	std::string	*stringPTR = &salut;
	std::string	&stringREF = salut;

	std::cout << "Mem address of string var: " << &salut << std::endl;
	std::cout << "Mem address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Mem address held by stringREF: " << &stringREF << std::endl;

	std::cout << std::endl << std::endl;

	
	std::cout << "Value of string var: " << salut << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return 0;
}
