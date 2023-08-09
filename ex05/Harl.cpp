/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:08:22 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/23 23:41:17 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	FunArr[0] = &Harl::debug;
	FunArr[1] = &Harl::info;
	FunArr[2] = &Harl::warning;
	FunArr[3] = &Harl::error;
}

Harl::~Harl()
{

}

void	Harl::debug()
{
	std::cout << "DEBUG : " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "INFO : " << "I cannot believe adding extra bacon costs more money. You didn’t put enough bac					on in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning()
{
	std::cout << "WARNING : " << "I think I deserve to have some extra bacon for free. I’ve been coming for years 					whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "ERROR : " << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string		Levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		i;

	i = -1;
	while (++i < 4)
	{
		if (!level.compare(Levels[i]))
		{
			(this->*FunArr[i])();
			return ;
		}
	}	
	std::cout << "UNKOWN LEVEL" << std::endl;
}


