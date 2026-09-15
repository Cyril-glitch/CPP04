/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 08:34:00 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 10:59:26 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "../inc/colors.hpp"

class Animal
{
    public :
        Animal(void);
        Animal(Animal const & src);
        virtual ~Animal(void);

        Animal & operator=(Animal const & rhs);
        virtual void   makeSound() const;
        std::string getType() const;

    protected : 

        std::string type;
};

#endif