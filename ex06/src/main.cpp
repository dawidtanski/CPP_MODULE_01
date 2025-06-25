/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:45:12 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/25 16:46:10 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"


enum e_levels
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

e_levels stringToLevel(std::string level)
{
	if (level == "DEBUG") return DEBUG;
	if (level == "INFO") return INFO;
	if (level == "WARNING") return WARNING;
	if (level == "ERROR") return ERROR;
	return UNKNOWN;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	Harl harl;
	e_levels level = stringToLevel(argv[1]);

    switch(level)
    {
		case DEBUG:
			harl.complain("DEBUG");
			// fall through
		case INFO:
			harl.complain("INFO");
			// fall through
		case WARNING:
			harl.complain("WARNING");
			// fall through
		case ERROR:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}