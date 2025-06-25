/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 21:03:59 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/22 21:27:05 by dtanski          ###   ########.fr       */
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
		Zombie(std::string	name);
		~Zombie(void);
		void	announce( void );
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string	name);

#endif