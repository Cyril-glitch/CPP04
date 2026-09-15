/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:40:28 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 11:56:14 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
# define BRAIN_CPP

#include <iostream>
#include "../inc/colors.hpp"

class Brain
{
    public :

        Brain();
        Brain(Brain const &src);
        ~Brain();

        Brain &operator=(Brain const &rhs);

        std::string const & getIdea(size_t index) const ;
        void setIdea(size_t index, std::string const & idea);

    
    private :

        std::string _ideas[100];
};

#endif