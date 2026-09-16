/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:54:43 by cyril             #+#    #+#             */
/*   Updated: 2026/09/16 11:37:59 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
    std::cout << PURPLE << "Brain Default constructor called." << RESET << std::endl;
}

Brain::Brain(Brain const & src)
{
    for (size_t i = 0 ; i < 100 ; i++)
        _ideas[i] = src._ideas[i];

    std::cout << PURPLE << "Brain Copy constructor called." << RESET << std::endl;
}

Brain::~Brain()
{
    std::cout << PURPLE << "Brain destructor called." << RESET << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
    if (this != &rhs)
    {
        for (size_t i = 0 ; i < 100 ; i++)
            _ideas[i] = rhs._ideas[i];
    }
    return *this;
}

std::string Brain::getIdea(size_t index) const
{
    if (index >= 100)
        return "";
    return _ideas[index];
}

void Brain::setIdea(size_t index, std::string const & idea)
{
    if (index < 100)
        _ideas[index] = idea;
}

