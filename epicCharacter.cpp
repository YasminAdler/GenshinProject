// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "EpicCharacter.hpp"
using namespace std;

/*Constructor*/

EpicCharacter::EpicCharacter(char *Name, char *Location, Element Type, Weapon WeaponType, char *EquippedWeapon, int Stars)
{
}


/*Getters*/
char *EpicCharacter::getEquippedWeapon()
{
    return getEquippedWeapon();
}
char* EpicCharacter::getEpicWeapon()
{
    return getWeapon();
}

Weapon EpicCharacter::getIntEpicWeapon()
{
    return getIntWeapon();
}

char *EpicCharacter::getEpicName()
{
    return getName();
}

/*Methods*/
int EpicCharacter::EditEpicWeapon(char *charName)
{
    return EditWeapon(charName);
}

void EpicCharacter::printEpicName()
{
    printName();
}

int EpicCharacter::Attack()
{
    switch (getIntEpicWeapon())
    {
    case Sword:
        printEpicName();
        cout << " swing swiftly the sword\n";
        break;
    case Polearm:
        printEpicName();

        cout << " agile with polearm\n";
        break;
    case Catalyst:
        printEpicName();
        cout << "cast spells with catalyst\n";
        break;
    case Claymore:
        printEpicName();
        cout << " swing the heavy claymore\n";
        break;
    case Bow:
        printEpicName();
        cout << " shot from afar with the bow\n";
        break;

    default:
        break;
    }
    return 0;
}
/*Destructor*/
EpicCharacter::~EpicCharacter()
{
}
