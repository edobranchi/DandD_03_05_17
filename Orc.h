//
// Created by studente on 12/04/17.
//

#ifndef DANDD_170405_2_ORC_H
#define DANDD_170405_2_ORC_H

#include "GameCharacter.h"

class Orc : public GameCharacter {
public:
    explicit Orc(int s, Weapon* w=nullptr) : GameCharacter(10, 1, w), strength(s) {}
    virtual void move(int x, int y) override;
    virtual int fight(GameCharacter& enemy) override;

private:
    int strength;
};


#endif //DANDD_170405_2_ORC_H
