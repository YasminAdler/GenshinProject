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

char *LegendaryCharacter::getLegendaryWeapon()
{
    return getWeapon();
}
Weapon LegendaryCharacter::getIntLegendaryWeapon()
{
    return getIntWeapon();
}
char *LegendaryCharacter::getLegendaryName()
{
    return getName();
}
char *LegendaryCharacter::legendaryGetEquipped()
{
    return getEquippedWeapon();
}
void LegendaryCharacter::printLegendaryName()
{
    printName();
}

/* Methods */

int LegendaryCharacter::Attack()
{

    switch (getIntLegendaryWeapon())
    {
    case Sword:
        printLegendaryName();
        cout << " swing swiftly the sword\n";
        break;
    case Polearm:
        printLegendaryName();

        cout << " agile with polearm\n";
        break;
    case Catalyst:
        printLegendaryName();
        cout << "cast spells with catalyst\n";
        break;
    case Claymore:
        printLegendaryName();
        cout << " swing the heavy claymore\n";
        break;
    case Bow:
        printLegendaryName();
        cout << " shot from afar with the bow\n";
        break;

    default:
        break;
    }
    if (strcpy(signitureWeapon, legendaryGetEquipped()) == 0) 
    {
        printLegendaryName();
        cout << " has a signiture weapon equipped! double demage!\n";
    }
    return 0;
}

int LegendaryCharacter::EditLegendaryWeapon(char *charName)
{
    return EditWeapon(charName);
}

/*Destructor*/
LegendaryCharacter::~LegendaryCharacter()
{
}
