//
// Created by studente on 05/04/17.
//

#include "Sword.h"

int Sword::use() {
    int damage = 0;

    damage = basicUse();

    if (valirian)
        damage *= 2;
    return damage;
}

Sword* Sword::clone() const {
    return new Sword(*this);

}