//
// Created by studente on 05/04/17.
//

#ifndef DANDD_170322_2_BOW_H
#define DANDD_170322_2_BOW_H

#include "Weapon.h"

class Bow : public Weapon {
public:
    Bow(int strength, int arrows=10, bool magic=false) : Weapon(strength, magic), shots(arrows) {}
    virtual int use() override;

    virtual Bow* clone() const override;

    int getShots() const {
        return shots;
    }

    void setShots(int shots) {
        Bow::shots = shots;
    }

protected:
    int shots;
};


#endif //DANDD_170322_2_BOW_H
