/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_2strs.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:01:03 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/25 12:37:16 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/replace_2strs.hpp"

static int	read_from_file(std::string filename, std::string *file_content)
{
	std::ifstream FileStream(filename.c_str());
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

static int	save_to_new_file(std::string filename, std::string data_to_save)
{
	// std::ofstream file("plik.txt");
	std::string output_filename = filename + ".replace";
	std::ofstream FileStream(output_filename.c_str());

	if (FileStream.is_open())
	{
		FileStream << data_to_save;
		FileStream.close();
	}
	else
	{
		std::cerr << "Cannot write down changes on file" << std::endl;
		return (1);
	}
	return (0);
}	


int	replace_2strs(std::string filename, std::string s1, std::string s2)
{
	std::string file_content;
	std::string modified_str;
	// std::string second_part;
	
	if (read_from_file(filename, &file_content) == 1)
		return (1);
	
	size_t str1_pos = 0;
	while ((str1_pos = file_content.find(s1)) != std::string::npos)
	{
		modified_str = file_content.erase(str1_pos, s1.length());
		modified_str = modified_str.insert(str1_pos, s2);
		file_content = modified_str;
	}
	return (save_to_new_file(filename, file_content));
}