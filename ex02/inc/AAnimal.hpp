/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 08:34:00 by cyril             #+#    #+#             */
/*   Updated: 2026/09/16 15:13:43 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "../inc/colors.hpp"

class AAnimal
{
    public :
        AAnimal(void);
        AAnimal(AAnimal const & src);
        virtual ~AAnimal(void);

        AAnimal & operator=(AAnimal const & rhs);
        virtual void   makeSound() const = 0;
        std::string getType() const;

    protected : 

        std::string type;
};

#endif