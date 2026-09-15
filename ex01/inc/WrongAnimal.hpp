/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:56:39 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 11:03:52 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "../inc/colors.hpp"

class WrongAnimal
{
    public :
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const & src);
        virtual ~WrongAnimal(void);

        WrongAnimal & operator=(WrongAnimal const & rhs);
        void   makeSound() const;
        std::string getType() const;

    protected : 

        std::string type;
};

#endif
