//
// Created by studente on 26/04/17.
//

#ifndef DANDD_170405_2_MAGEKNIGHT_H
#define DANDD_170405_2_MAGEKNIGHT_H

#include "Wizard.h"
#include "Knight.h"

class MageKnight :public Knight, public Wizard {
public:
    MageKnight(std:: string n,int hp, int d) : Knight(hp, d,n), Wizard(10, hp,d){}
    
    virtual void move(int x, int y) override ;
    virtual int fight(GameCharacter& enemy) override ;
    
};


#endif //DANDD_170405_2_MAGEKNIGHT_H
