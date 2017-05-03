//
// Created by Edoardo Canti on 03/05/17.
//

#include "Potion.h"

bool Potion::operator>(const Potion &right) const {
    if(strength+mana > (right.strength+right.mana))
        return true;
    else
        return false;
}