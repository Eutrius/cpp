/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:33:53 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/23 14:34:11 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *bob = new Character("Bob");
    ICharacter *marley = new Character("Marley");

    for (int i = 0; i < 4; ++i)
    {
        AMateria *mat = (i % 2 == 0) ? src->createMateria("ice") : src->createMateria("cure");
        bob->equip(mat);
    }

    AMateria *extra = src->createMateria("ice");
    bob->equip(extra);

    {
        for (int i = 0; i < 4; ++i)
            bob->use(i, *marley);
    }

    bob->use(4, *marley);
    bob->use(-1, *marley);

    AMateria *savedPtrs[4];
    for (int i = 0; i < 4; ++i)
    {
        savedPtrs[i] = static_cast<Character *>(bob)->getMateriaPtr(i);
    }

    for (int i = 0; i < 4; ++i)
    {
        bob->unequip(i);
    }

    bob->unequip(0);
    bob->unequip(-1);
    bob->unequip(4);

    for (int i = 0; i < 4; ++i)
    {
        delete savedPtrs[i];
    }

    delete extra;
    delete src;
    delete bob;
    delete marley;

    return (0);
}
