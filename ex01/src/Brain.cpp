/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:54:43 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 11:59:52 by cyril            ###   ########.fr       */
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




