//
// Created by studente on 05/04/17.
//

#include "Bow.h"

int Bow::use() {
    int damage = 0;
    if(shots) {

        damage = basicUse();

        shots--;
    }
    return damage;
}

Bow* Bow::clone() const {
    return new Bow(*this);
}