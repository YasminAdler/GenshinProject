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
        : Character(Name, Location, Type, WeaponType, EquippedWeapon, Stars){};

    LegendaryCharacter(char *Name, char *Location,
                       Element Type, Weapon WeaponType, char *EquippedWeapon, int Stars, char *signitureWeapon)
        : Character(Name, Location, Type, WeaponType, EquippedWeapon, Stars){};

    /* Getters */
    Weapon getLegendaryWeapon();
    char *getLegendaryName(); 


    /* Setters */
    void setName(char *Name);

    /* Setters */

    /*Destructor*/
    ~LegendaryCharacter();


    /*Methods*/
    int Attack();
    int EditLegendaryWeapon(Weapon weaponNum);
    void printLegendaryName();
};

#endif // LEGENDARYCHARACTER_HPP