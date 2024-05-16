/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:14:35 by momrane           #+#    #+#             */
/*   Updated: 2024/05/16 11:55:53 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

std::string	replace(std::string line, std::string s1, std::string s2)
{
	std::string	newline;
	size_t		pos = 0;
	size_t		found;
	
	if (s1 == s2 || s1.empty())
		return (line);
	found = line.find(s1, pos);
	while (found != std::string::npos)
	{
		newline += line.substr(pos, found - pos);
		newline += s2;
		pos = found + s1.length();
		found = line.find(s1, pos);
	}
	newline += line.substr(pos);
	return (newline);
}

int	sed(std::string filename, std::string s1, std::string s2, std::string outfile)
{
	std::string		replaced;
	std::string		buf;
	std::ifstream	in;
	std::ofstream	out;

	in.open(filename.c_str());
	if (!in.is_open())
		return ((std::cerr << RED << "Error: This file [" << filename << "] cannot be opened" << RESET << std::endl), 1);
	out.open(outfile.c_str());
	if (!out.is_open())
		return ((std::cerr << RED << "Error: failed to open or create [" << outfile << "]" << RESET << std::endl), 1);
	while (std::getline(in, buf))
	{
		replaced = replace(buf, s1, s2);
		out << replaced << std::endl;
	}
	in.close();
	out.close();
	return ((std::cout << GREEN << outfile << " created successfully !" << RESET << std::endl), 0);
}
