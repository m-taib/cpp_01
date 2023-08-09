/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:46:30 by mtaib             #+#    #+#             */
/*   Updated: 2023/08/09 17:10:39 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce( void );
		std::string 	GetName();
		void SetName(std::string name);
	private :
		std::string 	_name;
};
	
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif
