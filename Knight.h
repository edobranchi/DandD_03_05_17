//
// Created by studente on 05/04/17.
//

#ifndef DANDD_170322_2_KNIGHT_H
#define DANDD_170322_2_KNIGHT_H

#include "GameCharacter.h"
#include <string>

class Knight : virtual public GameCharacter {
public:
    Knight(int hp, int dexterity, std::string n, int a=1, int l=0, Weapon* weapon=nullptr);
    virtual void move(int x, int y) override;
    virtual int fight(GameCharacter& enemy) override;

    Knight(const Knight& original);

protected:
    std::string name;
    int armor;
    int level;
};


#endif //DANDD_170322_2_KNIGHT_H
