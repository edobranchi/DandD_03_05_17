//
// Created by studente on 12/04/17.
//

#ifndef DANDD_170405_2_WIZARD_H
#define DANDD_170405_2_WIZARD_H

#include "GameCharacter.h"

class Wizard : virtual public GameCharacter {
public:
    // FIXME add name
    Wizard(int m, int hp, int d, Weapon* w=nullptr) : GameCharacter(hp, d, w), mana(m) {}
    virtual void move(int x, int y) override;
    virtual int fight(GameCharacter& enemy) override;
    virtual void doMagic(); // XXX I can extend Wizard

private:
    int mana;
};


#endif //DANDD_170405_2_WIZARD_H
