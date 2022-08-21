/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:25:49 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/21 13:56:41 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

# define FPT_ARR_SIZE 4

class Harl
{
private:
	const Harl::*fp( void )	fpt_array[FPT_ARR_SIZE]
		= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	size_t					fpt_arr_index( std::string level );
	void					debug( void );
	void					info( void );
	void					warning( void );
	void					error( void );
public:
	void	complain( std::string level );
			Harl();
			~Harl();
};


#endif /* HARL_H */
