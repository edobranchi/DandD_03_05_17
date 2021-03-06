#include <iostream>
#include "Weapon.h"
#include "Bow.h"
#include "Sword.h"
#include "GameCharacter.h"
#include "Knight.h"
#include "Wizard.h"
#include "Orc.h"
#include "Die.h"
#include "Inventory.h"
#include "Potion.h"
#include "Utility.h"

int main() {
    Die::initRandom();
    Potion p1(12,4);
    Potion p2(24,3);
    Potion strongerPotion = maxElement(p1,p2);
    Sword spareSword(12, false, true);
    Inventory<Potion> vault(2);
    //Inventory<Sword><Bow> armory(12);
    Inventory<Weapon *> armory(12);
    bool result = vault.setElement(0,p1);
    result = armory.setElement(0,&spareSword);
    Weapon *armoryElement = nullptr;
    result = armory.getElement(0,armoryElement);

    Weapon* primaryWeapon;
    bool isSword = false;
    if (isSword)
        primaryWeapon = new Sword(12, false, true);
    else
        primaryWeapon = new Bow(8, 12, false);



    bool useKnight = true;
    GameCharacter* hero;
    if(useKnight)
        hero = new Knight(45, 2, "Jon Snow", 1, 0, primaryWeapon);
    else
        hero = new Wizard(100, 45, 2, primaryWeapon);

    Sword sword(8, false, false);
    Orc orc(12);
    GameCharacter* monsters[3];
    for(int i=0; i<3; i++)
        monsters[i] = new Orc(2, &sword);


    for(int i=0; i<3; i++)
        monsters[i]->fight(*hero);
    int damage = hero->fight(orc);
    Wizard* wizard = dynamic_cast<Wizard*>(hero);
    if (wizard)
        wizard->doMagic();
    if (damage)
        std::cout << "orc hit: " << damage << std::endl;
    if (orc.getHp() <= 0)
        std::cout << "orc is dead" << std::endl;

    for(int i=0; i<3; i++)
        delete monsters[i];
    return 0;
}