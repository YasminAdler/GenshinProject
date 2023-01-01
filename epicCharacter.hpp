// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef EPICCHARACTER_HPP
#define EPICCHARACTER_HPP
#include "character.hpp"

class EpicCharacter : public Character
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
    char *getEpicWeapon();
    Weapon getIntEpicWeapon();
    char *getEpicName();
    char *getEquippedWeapon();

    /* Setters */

    /* Operators */

    /* Methods */
    int Attack();
    int EditEpicWeapon(char *charName);
    void printEpicName();

    /* Destructor */
    ~EpicCharacter();
};
/* Stream operators */

#endif // EPICCHARACTER_HPP