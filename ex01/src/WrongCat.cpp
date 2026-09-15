/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:14:28 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 10:54:55 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() 
{
	type = "Wrong Cat";
	std::cout << PURPLE <<"WrongCat default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(WrongCat const & rhs) : WrongAnimal(rhs)
{
	std::cout  << MINT << type << " Copy constructor called." << RESET << std::endl; 
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
    type = src.type;
    return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "\"Wrong Cat sound\"" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << PURPLE <<"WrongCat destructor called" << RESET << std::endl;
}