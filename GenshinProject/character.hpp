#pragma once
#include "element.hpp"
#include "weapon.hpp"

class Character
{
private:
    char *name;
    char *location;
    Element type;
    Weapon weaponType;
    char *equippedWeapon;
    int stars;

public:
    /*Constructors*/
    Character();
    Character(char *Name, char *Location,
              Element Type, Weapon WeaponType, char *EquippedWeapon, int Stars);
        /*Destructors*/
        ~Character();
    /*Methods*/
    int virtualAttack();
    int EditWeapon(char *);
};