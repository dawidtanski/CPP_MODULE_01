/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_2strs.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:01:03 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/25 10:24:40 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/replace_2strs.hpp"

int	read_from_file(std::string filename, std::string *file_content)
{
	std::ifstream FileStream(filename);
	std::stringstream buffer;

	if (!FileStream.is_open())
	{
		std::cerr << "Can't open the file!" << std::endl;
		return (1);
	} 
	buffer << FileStream.rdbuf();
	*file_content = buffer.str();


	FileStream.close();
	return (0);
}


void	replace_2strs(std::string filename, std::string s1, std::string s2);
{
	std::string file_content;

	if (read_from_file(filename, &file_content) == 1)
		return (1);
	else
	{
		
	}
}