#ifndef LEGENDARYCHARACTER_HPP
#define LEGENDARYCHARACTER_HPP
#include "character.hpp"

class LegendaryCharacter : protected Character
{
private:
    char *signitureWeapon;

public:
    /*Constructor*/
    LegendaryCharacter(char *Name, char *Location,
                       Element Type, Weapon WeaponType, char *EquippedWeapon, int Stars)
                       : Character(Name, Location, Type, WeaponType, EquippedWeapon, Stars) {};

        /*Destructor*/
        ~LegendaryCharacter();
    /*Methods*/
    int Attack();
};


#endif // LEGENDARYCHARACTER_HPP