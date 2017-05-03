//
// Created by Edoardo Canti on 03/05/17.
//

#ifndef DANDD_170405_2_POTION_H
#define DANDD_170405_2_POTION_H


class Potion {

public:
    explicit Potion(int s=5, int m=5):strength(s),mana(m){}; //costruttore nostro (default)

    int getStrength() const {
        return strength;
    }

    void setStrength(int strength) {
        Potion::strength = strength;
    }

    int getMana() const {
        return mana;
    }

    void setMana(int mana) {
        Potion::mana = mana;
    }

protected:
    int strength;
    int mana;
};


#endif //DANDD_170405_2_POTION_H
