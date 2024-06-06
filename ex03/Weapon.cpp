/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:04:25 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/05 19:56:09 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name){
	this->name = name;
}
Weapon::~Weapon(){
	
}

std::string Weapon::getType()
{
	return(this->name);
}

void Weapon::setType(std::string a)
{
	this->name = a;
}
