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
#include "utils.h"

int main(void)
{
    cPrint("* Materia Source Test *", 1, GREEN);
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Cure());
    src->learnMateria(src->createMateria("cure"));
    src->learnMateria(new Ice());
    src->learnMateria(src->createMateria("ice"));
    src->learnMateria(new Ice());
    dynamic_cast<MateriaSource *>(src)->printInfo("src");
    MateriaSource src_copy;
    src_copy.learnMateria(new Ice());
    src_copy.learnMateria(new Ice());

    src_copy.printInfo("src_copy before");
    src_copy = *(dynamic_cast<MateriaSource *>(src));

    src_copy.printInfo("src_copy after");

    delete (src);

    cPrint("* Character Test *", 1, GREEN);
    ICharacter *me = new Character("me");
    dynamic_cast<Character *>(me)->printInfo("");

    me->equip(src_copy.createMateria("cure"));
    me->equip(src_copy.createMateria("cure"));
    me->equip(src_copy.createMateria("ice"));
    me->equip(src_copy.createMateria("ice"));

    dynamic_cast<Character *>(me)->printInfo("after equip");

    Character copy = *(dynamic_cast<Character *>(me));
    AMateria *tmp = copy.getMateriaPtr(3);
    copy.unequip(3);
    copy.unequip(5);
    delete (tmp);
    copy.printInfo("copy");

    copy.use(5, *me);

    dynamic_cast<Character *>(me)->printInfo("");
    ICharacter *bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);

    delete (me);
    delete (bob);

    return (0);
}
