/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 08:51:43 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/25 12:07:34 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/replace_2strs.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Program takes 3 arguments as an input" << std::endl;
		return (1);
	}
	else
		replace_2strs(argv[1], argv[2], argv[3]);
	return (0);
}