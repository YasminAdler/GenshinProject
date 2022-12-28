#pragma once
#include "character.hpp"

class EpicCharacter : protected Character
{
private:
public:
    /*Constructor*/
    EpicCharacter(char *Name, char *Location,
                       Element Type, Weapon WeaponType, char *EquippedWeapon, int Stars)
                       : Character(Name, Location, Type, WeaponType, EquippedWeapon, Stars) {};
    /*Destructor*/
    ~EpicCharacter();
    /*Methods*/
    int Attack();
};