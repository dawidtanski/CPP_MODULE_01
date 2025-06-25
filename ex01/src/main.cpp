/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 21:37:13 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/23 12:11:02 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
	int	zombieCount = 5;

	
	Zombie *horde = zombieHorde(zombieCount, "Deadman");
	std::cout << "--- Testing horde ---" <<std::endl;
	for (int i = 0; i < zombieCount; i++)
	{
		std::cout << "Zombie: " << i << ": ";
		horde[i].announce();
	}

	std::cout << "--- Deleting a horde ---" << std::endl;
	delete[] horde;

	return (0);
}