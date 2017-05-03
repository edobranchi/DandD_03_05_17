//
// Created by studente on 22/03/17.
//

#ifndef DANDD_170322_2_WEAPON_H
#define DANDD_170322_2_WEAPON_H

class Weapon {
public:
    //Weapon(); //O scrivo il costruttore di default cosi o do un valore sotto ad S
    explicit Weapon(int s=1, bool m=false) : strength(s), magic(m) {};
    virtual int use() = 0;

    virtual Weapon* clone() const = 0;


    void setStrength(int s) {
        strength = s;
    }
    int getStrength() {
        return strength;
    }
    void setMagic(bool m) {
        magic = m;
    }
    bool getMagic() {
        return magic;
    }
protected:
    int strength;
    bool magic;

    virtual int basicUse();
};

#endif //DANDD_170322_2_WEAPON_H
