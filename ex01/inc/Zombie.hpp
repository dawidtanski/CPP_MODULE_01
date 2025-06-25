/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 21:03:59 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/23 12:14:18 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce( void );
		void	setName(std::string name);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string	name);
Zombie	*zombieHorde(int N, std::string name);

#endif