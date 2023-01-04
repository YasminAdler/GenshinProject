#ifndef LEGENDARYCHARACTER_HPP
#define LEGENDARYCHARACTER_HPP
#include "character.hpp"

class LegendaryCharacter : public Character
{
private:
    char *signitureWeapon;

public:
    /* Constructors */
    LegendaryCharacter();
    LegendaryCharacter(char *Name,
                       char *Location,
                       Element Type,
                       Weapon WeaponType,
                       char *EquippedWeapon,
                       int Stars,
                       char *signitureWeapon);

    /* Getters */
    char *getLegendaryWeapon();
    Weapon getIntLegendaryWeapon();
    char *getLegendaryName();
    char *legendaryGetEquipped();

    /* Methods */
    void Attack();
    void EditLegendaryWeapon(char *charName);
    void printLegendaryName();

    /* Destructor */
    ~LegendaryCharacter();
};

#endif // LEGENDARYCHARACTER_HPP