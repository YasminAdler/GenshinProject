// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "character.hpp"

using namespace std;

static char *WeaponName[]{
    {(char *)"Sword"},
    {(char *)"Polearm"},
    {(char *)"Catalyst"},
    {(char *)"Claymore"},
    {(char *)"Bow"}};

/* Constructors */
Character::Character()
    : name(nullptr),
      location(nullptr),
      type(nullElement),
      weaponType(nullWeapon),
      equippedWeapon(nullptr),
      stars(0) {}
Character::Character(char *Name,
                     char *Location,
                     Element Type,
                     Weapon WeaponType,
                     char *EquippedWeapon,
                     int Stars)
    : name(strdup(Name)),
      location(strdup(Location)),
      type(Type),
      weaponType(WeaponType),
      equippedWeapon(EquippedWeapon),
      stars(Stars) {}

/* Getters */
// What does this do? ***
// or supposed to do.
char *Character::getWeapon(int weapon)
{
    if (weapon == -1)
        weapon = (int)weaponType;
    switch (weapon)
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
    return nullptr;
}
Weapon Character::getIntWeapon()
{
    return weaponType;
}

char *Character::getEquippedWeapon()
{
    return equippedWeapon;
}

char *Character::getLocation()
{
    return location;
}

Element Character::getElement()
{
    return type;
}

/* Setters */
void Character::SetEquippedWeapon(char *newWeapon)
{
    if (equippedWeapon != nullptr)
        delete[] equippedWeapon;
    equippedWeapon = strdup(newWeapon);
}

/* Methods */
void Character::EditWeapon(char *charName) // got to check this, might cause problems
{
    char input = '0';
    Weapon newWeapon = nullWeapon;
    if (strcmp(name, charName) != 0)
        return;

    while (newWeapon <= nullWeapon || newWeapon >= lastWeapon)
    {
        cout << "Choose your new weapon:\n";
        printWeaponName();
        cin >> input;
        cin.clear();
        newWeapon = (Weapon)(input - '0');
        if (newWeapon <= nullWeapon || newWeapon >= lastWeapon)
        {
            cout << "Invalid number\n";
        }
    }
    weaponType = newWeapon;
}

void Character::printName()
{
    for (size_t i = 0; i < strlen(name); i++)
    {
        cout << name[i];
    }
}

void Character::printWeaponName()
{
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << i + 1 << ".";
        for (size_t j = 0; j < strlen(WeaponName[i]); j++)
        {
            std::cout << WeaponName[i][j];
        }
        std::cout << "\n";
    }
};

/* Destructor */
Character::~Character()
{
    if (name != nullptr)
        delete[] name;
    if (location != nullptr)
        delete[] location;
    if (equippedWeapon != nullptr)
        delete[] equippedWeapon;
}

/* Stream operators */
std::ostream &operator<<(std::ostream &os, Character &character)
{
    os << character.getName();
}