/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:39:06 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/20 19:33:58 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

static void	open_fail( void );
static void	read_write_fail(std::ifstream &myFile, std::ofstream &output);
static void	substitute_all(std::string to_find, std::string replacement,
				std::ifstream &myFile, std::ofstream &output);
static void	shift_buffer(std::string &buffer, std::string to_find,
				std::ofstream &output);
static void replace_line(size_t new_pos,
				std::string &buffer, std::string replacement,
				std::ofstream &output);
static bool	find_success(size_t index);
//* end of static declarations

/**
 * @brief this function returns true iff the sed operation could be performed without any errors.
 * 
 * @param filename 
 * @param to_find 
 * @param replacement 
 * @return true 
 * @return false 
 */
bool	my_sed(std::string filename, std::string to_find, std::string replacement)
{
	std::ifstream	myFile (filename);
	std::ofstream	output (std::string(filename) + std::string(".replace"));

	if (false == myFile.is_open() || false == output.is_open())
	{
		open_fail();
		return (false);
	}
	else
	{
		substitute_all(to_find, replacement, myFile, output);
		if (myFile.bad())
		{
			read_write_fail(myFile, output);
			return (false);
		}
	}
	return (true);
}

static void	substitute_all(std::string to_find, std::string replacement,
				std::ifstream &myFile, std::ofstream &output)
{
	std::string	buffer;
	std::string	pre;
	size_t		new_pos;
	char		*line;

	buffer = std::string("");
	while (myFile.read(line, to_find.length()))
	{
		buffer += std::string(line);
		new_pos = buffer.find(to_find);
		if (false == find_success(new_pos))
		{
			shift_buffer(buffer, to_find, output);
		}
		else
		{
			replace_line(new_pos, buffer, replacement, output);
		}
	}

}

static void	shift_buffer(std::string &buffer, std::string to_find,
				std::ofstream &output)
{
	size_t		new_pos;

	new_pos = buffer.find(to_find[0]);
	if (false == find_success(new_pos))
	{
		output << buffer;
		buffer.erase(0);
	}
	else
	{
		output << buffer.substr(0, new_pos);
		buffer = buffer.substr(new_pos);
	}
}

static void replace_line(size_t new_pos,
				std::string &buffer, std::string replacement,
				std::ofstream &output)
{
	if (new_pos == 0)
		output << replacement;
	else
		output << buffer.substr(0, new_pos) << replacement;
	new_pos = new_pos + replacement.length();
	if (new_pos > buffer.length() - 1)
		buffer.erase(0);
	else
		buffer = buffer.substr(new_pos);
}

static void	open_fail( void )
{
	//* we don't write to cerr because 'General rules' say write to cout unless explicitly told otherwise'
	std::cout << RED << "Error: could not open file" << RESET << std::endl;
}

static void read_write_fail(std::ifstream &myFile, std::ofstream &output)
{
	myFile.close();
	output.close();
	//* we don't write to cerr because 'General rules' say write to cout unless explicitly told otherwise'
	std::cout << RED << "Error: write/read operation failed" << RESET << std::endl;
}

static bool	find_success(size_t index)
{
	return (index != std::string::npos);
}