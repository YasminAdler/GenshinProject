// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "legendaryCharacter.hpp"

using namespace std;

/*Constructor*/
LegendaryCharacter::LegendaryCharacter(char *Name, char *Location, Element Type, Weapon WeaponType, char *EquippedWeapon, int Stars)
{
}
LegendaryCharacter::LegendaryCharacter(char *Name, char *Location, Element Type, Weapon WeaponType, char *EquippedWeapon, int Stars, char *SignitureWeapon)
{
    signitureWeapon = strdup(SignitureWeapon);
}

/* Getters */

Weapon LegendaryCharacter::getLegendaryWeapon()
{
    return getWeapon();
}
char *LegendaryCharacter::getLegendaryName()
{
    return getName();
}
void LegendaryCharacter::printLegendaryName()
{
    printName();
}

/* Methods */

int LegendaryCharacter::Attack()
{
    switch (this->getLegendaryWeapon())
    {
    case Sword:
        printLegendaryName();
        cout << " swing swiftly the sword";
        break;
    case Polearm:
        printLegendaryName();

        cout << " agile with polearm";
        break;
    case Catalyst:
        printLegendaryName();
        cout << "cast spells with catalyst";
        break;
    case Claymore:
        printLegendaryName();
        cout << " swing the heavy claymore";
        break;
    case Bow:
        printLegendaryName();
        cout << " shot from afar with the bow";
        break;

    default:
        break;
    }
    return 0;
}

int LegendaryCharacter::EditLegendaryWeapon(Weapon weaponNum)
{
    return EditWeapon(weaponNum);
}

/*Destructor*/
LegendaryCharacter::~LegendaryCharacter()
{
}
