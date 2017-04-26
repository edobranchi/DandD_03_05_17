//
// Created by studente on 05/04/17.
//

#include "Knight.h"

Knight::Knight(int hp, int dexterity, std::string n, int a, int l, Weapon *weapon) : GameCharacter(hp, dexterity, weapon), name(n), armor(a), level(l) {
    // load bitmaps...
    // more stuff...
    // ... more work
}

Knight::Knight(const Knight &original) : GameCharacter(original){
    name=original.name;
    armor=original.armor;
    level=original.level;
}

void Knight::move(int x, int y) {
    // ...
    posX += x;
    posY += y;
}

int Knight::fight(GameCharacter &enemy) {
    int damage = 1;

    if (weapon != nullptr)
        damage = weapon->use();
    if (level>5)
        damage *= 2;

    enemy.setHp( enemy.getHp() - damage);
    return damage;
}