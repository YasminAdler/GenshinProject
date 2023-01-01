// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "element.hpp"
#include "weapon.hpp"
#include <string.h>

class Character
{
private:
    char *name;
    char *location;
    Element type;
    Weapon weaponType;
    char *equippedWeapon;
    int stars;

public:
    /*Constructors*/
    Character();
    Character(char *Name, char *Location,
              Element Type, Weapon WeaponType, char *EquippedWeapon, int Stars);

    /* Getters */
    Weapon getWeapon(){return weaponType;};
    char* getName(){return name;};

    /* Setters */
    void setName(char* Name) {name = strdup(Name);};

    /*Methods*/
    virtual int virtualAttack();
    int EditWeapon(Weapon weaponNum);
    void printName();

    /*Destructors*/
    ~Character();
};

#endif // CHARACTER_HPP