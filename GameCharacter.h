//
// Created by studente on 22/03/17.
//

#ifndef DANDD_170322_2_GAMECHARACTER_H
#define DANDD_170322_2_GAMECHARACTER_H

#include "Weapon.h"

class GameCharacter {
public:
    GameCharacter(int h, int d, Weapon* w=nullptr);
    virtual void move(int x, int y) = 0;
    virtual int fight(GameCharacter& enemy) = 0;

    GameCharacter(const GameCharacter& original);
    GameCharacter& operator=(const GameCharacter& right);


    int getHp() const {
        return hp;
    }

    void setHp(int hp) {
        GameCharacter::hp = hp;
    }

    int getDexterity() const {
        return dexterity;
    }

    void setDexterity(int dexterity) {
        GameCharacter::dexterity = dexterity;
    }

    int getPosX() const {
        return posX;
    }

    void setPosX(int posX) {
        GameCharacter::posX = posX;
    }

    int getPosY() const {
        return posY;
    }

    void setPosY(int posY) {
        GameCharacter::posY = posY;
    }

    Weapon *getWeapon() const {
        return weapon;
    }

    void setWeapon(Weapon *weapon) {
        GameCharacter::weapon = weapon;
    }


protected:
    int hp;
    int dexterity;
    int posX, posY;
    Weapon* weapon;
};


#endif //DANDD_170322_2_GAMECHARACTER_H
