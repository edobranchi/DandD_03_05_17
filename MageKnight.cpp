//
// Created by studente on 26/04/17.
//

#include "MageKnight.h"

void MageKnight::move(int x, int y) {
    //specific code
    Wizard::move(x,y);
    //more code
}

int MageKnight::fight(GameCharacter &enemy) {
    int result = 0;
    //code
    result += Knight::fight(enemy);
    //code
    return result;
}