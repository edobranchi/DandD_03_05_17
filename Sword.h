//
// Created by studente on 05/04/17.
//

#ifndef DANDD_170322_2_SWORD_H
#define DANDD_170322_2_SWORD_H

#include "Weapon.h"

class Sword : public Weapon {
public:
    Sword(int strength, bool magic=false, bool val=false) : Weapon(strength, magic), valirian(val) {}
    virtual int use() override;

    virtual Sword* clone() const override;

    bool isValirian() const {
        return valirian;
    }

    void setValirian(bool valirian) {
        Sword::valirian = valirian;
    }

protected:
    bool valirian;
};


#endif //DANDD_170322_2_SWORD_H
