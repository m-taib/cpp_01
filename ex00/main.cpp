/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 22:37:41 by mtaib             #+#    #+#             */
/*   Updated: 2023/08/09 16:54:15 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	Zombie 	*NewZombie;

	NewZombie = newZombie("Foo");
	NewZombie->announce();
	delete NewZombie;
	randomChump("roo");
	return (0);
}
