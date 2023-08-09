/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:32:36 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/21 18:45:47 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Horde;
	int		i;

	i = -1;
	Horde = new Zombie[N];
	while (++i < N)
	{
		Horde[i].SetName(name);
		Horde->announce();
	}
	return (Horde);
}
