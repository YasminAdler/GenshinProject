// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "character.hpp"
using namespace std;

Character::Character()
{
}
Character::Character(char *Name, char *Location,
                     Element Type, Weapon WeaponType, char *EquippedWeapon, int Stars)
{
}

Weapon Character::getWeapon()
{
    return weaponType;
}

int Character::EditWeapon(char *charName)
{
    // if(int i = 0; i< )
    // weaponType =;
    // return weaponType;
}

void Character::printName()
{
    for (int i = 0; i < strlen(name); i++)
    {
        cout << name[i];
    }
}

Character::~Character()
{
}