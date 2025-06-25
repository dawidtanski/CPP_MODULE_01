/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:30:28 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/23 16:01:51 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str	= "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	// Printing out adresses
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	// Printing out values
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;


	return (0);
}