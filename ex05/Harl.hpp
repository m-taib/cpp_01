/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:56:24 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/23 23:40:41 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public :
		void complain( std::string level);
		typedef void	(Harl::*FunPtr)();
		FunPtr FunArr[4];
		Harl();
		~Harl();
	private :	
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

enum	t_levels
{
	DEBUG ,
	INFO , 
	WARNING ,
	ERROR
};

#endif
