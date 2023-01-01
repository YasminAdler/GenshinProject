// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef EPICCHARACTER_HPP
#define EPICCHARACTER_HPP
#include "character.hpp"

class EpicCharacter : protected Character
{
private:
public:
    /* Constructors */
    EpicCharacter(char *Name,
                  char *Location,
                  Element Type,
                  Weapon WeaponType,
                  char *EquippedWeapon,
                  int Stars)
        : Character(Name, Location, Type, WeaponType, EquippedWeapon, Stars){};
    /* Getters */

    /* Setters */

    /* Operators */

    /* Methods */
    int Attack();
    int EditEpicWeapon(Weapon weaponNum);

    /* Destructor */
    ~EpicCharacter();
};
/* Stream operators */

#endif // EPICCHARACTER_HPP