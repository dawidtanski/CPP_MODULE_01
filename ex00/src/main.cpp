/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 21:37:13 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/22 21:41:55 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete	heapZombie;
	randomChump("StackZombie");

	return (0);
}