#ifndef LEGENDARYCHARACTER_HPP
#define LEGENDARYCHARACTER_HPP
#include "character.hpp"

class LegendaryCharacter : public Character
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
    char* getLegendaryWeapon();
    Weapon getIntLegendaryWeapon();
    char *getLegendaryName(); 
    char* legendaryGetEquipped();


    /* Setters */
    void setName(char *Name);

    /* Setters */

    /*Destructor*/
    ~LegendaryCharacter();


    /*Methods*/
    void Attack();
    void EditLegendaryWeapon(char* charName);
    void printLegendaryName();
};

#endif // LEGENDARYCHARACTER_HPP