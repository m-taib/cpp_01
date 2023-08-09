/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:42:10 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/22 13:11:12 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	public :
		const std::string& 	getType();
		void	setType(std::string type);
		Weapon();
		Weapon(std::string name);
		~Weapon();
	private :
		std::string 	_type;

};
#endif
