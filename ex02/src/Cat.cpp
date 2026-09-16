/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:25:21 by cyril             #+#    #+#             */
/*   Updated: 2026/09/16 15:03:19 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Cat::Cat() : AAnimal()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << PURPLE <<"Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(Cat const & src) : AAnimal(src)
{
	_brain = new Brain(*src._brain);
	std::cout  << PURPLE << type << "copy constructor called." << RESET << std::endl; 
}

Cat & Cat::operator=(Cat const & rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;
		if (_brain && rhs._brain)
        	*_brain = *rhs._brain;
    }
    return *this;
}

void Cat::makeSound() const
{
	std::cout << "\"Meooow...\"" << std::endl;
}

Brain* Cat::getBrain() const
{
	return _brain;
}

Cat::~Cat()
{
	if (_brain != NULL)
	{
		delete _brain;
		_brain = NULL;
	}
	std::cout << PURPLE << "Cat destructor called" << RESET <<std::endl;
}