/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 08:51:43 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/25 09:00:45 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/replace_2strs.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	else
	{
		replace_2strs(argv[1], argv[2], argv[3]);
	}
	return (0);
}