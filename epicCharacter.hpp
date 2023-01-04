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
    EpicCharacter() : Character(){};
    EpicCharacter(char *Name,
                  char *Location,
                  Element Type,
                  Weapon WeaponType,
                  char *EquippedWeapon,
                  int Stars);

    /* Getters */
    char *getEpicWeapon();
    Weapon getIntEpicWeapon();
    char *getEpicName();

    /* Setters */

    /* Operators */

    /* Methods */
    void Attack();
    void EditEpicWeapon(char *charName);
    void printEpicName();

    /* Destructor */
    ~EpicCharacter();
};
/* Stream operators */

#endif // EPICCHARACTER_HPP