/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_2strs.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:01:03 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/25 11:43:42 by dtanski          ###   ########.fr       */
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
	std::string first_part;
	std::string second_part;
	// int		i;
	
	if (read_from_file(filename, &file_content) == 1)
		return ;
	
	size_t str1_pos = 0;
	while (file_content)
	{
		str1_pos = file_content.find(s1);
		first_part = file.content.erase(str1_pos, s1.length());
		first_part = first_part.insert(str1_pos, s2);
		// first_part = file_content.substr(0, str1pos + 1);
		// second_part = file.content.substr((str1_pos + s1.length()), file_content.length() - (str1_pos + s1.length()));
		file_content = first_part;
		// file_content.copy()
	}
	

}