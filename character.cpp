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

char *Character::getWeapon()
{
    switch (weaponType)
    {
    case 0:
        return WeaponName[0];
        break;
    case 1:
        return WeaponName[1];
        break;
    case 2:
        return WeaponName[2];
        break;
    case 3:
        return WeaponName[3];
        break;
    case 4:
        return WeaponName[4];
        break;

    default:
        break;
    }
}
Weapon Character::getIntWeapon()
{
    return weaponType;
}

char *Character::getEquippedWeapon()
{
    return equippedWeapon;
}

int Character::EditWeapon(char *charName)
{
    if (strcmp(name, charName) == 0)
    {
        int newWeapon = -1;
        while (newWeapon < 0 || newWeapon > 4)
        {
            cout << "Choose your new weapon:\n";

            printWeaponName();

            cin >> newWeapon;
            if (newWeapon < 0 || newWeapon > 4)
            {
                cout << "Invalid number\n";
            }
        }
        weaponType = (Weapon)newWeapon;
    }
    return 0;
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