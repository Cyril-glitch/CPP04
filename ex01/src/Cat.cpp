/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:25:21 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 10:51:55 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << PURPLE <<"Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(Cat const & rhs) : Animal(rhs)
{
	std::cout  << MINT << type << "Cat copy constructor called." << RESET << std::endl; 
}

Cat & Cat::operator=(Cat const & src)
{
    type = src.type;
    return *this;
}

void Cat::makeSound() const
{
	std::cout << "\"Meooow...\"" << std::endl;
}

Cat::~Cat()
{
	std::cout << PURPLE << "Cat destructor called" << RESET <<std::endl;
}