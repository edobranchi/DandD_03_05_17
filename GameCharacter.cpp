//
// Created by studente on 22/03/17.
//

#include "GameCharacter.h"

GameCharacter::GameCharacter(int h, int d, Weapon *w) :
        hp(h), dexterity(d), weapon(w) {
    // load bitmap
    // do more work...
}

GameCharacter::GameCharacter(const GameCharacter &original) {
    hp=original.hp;
    posX=original.posX;
    posY=original.posY;
    dexterity=original.dexterity;

    if (original.weapon != nullptr)
        weapon = (original.weapon)->clone();
    else
    weapon = nullptr;
}

GameCharacter& GameCharacter::operator=(const GameCharacter &right) {
    if(this != &right)
        if (weapon != nullptr)
            delete weapon;

        hp=right.hp;
        posY=right.posY;
        posX=right.posX;
        dexterity=right.dexterity;

        if(right.weapon!= nullptr)
            weapon= (right.weapon)->clone();
        else
            weapon= nullptr;


    return *this;
}