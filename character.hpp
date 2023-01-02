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
    char* getWeapon();
    Weapon getIntWeapon();
    char* getName(){return name;};
    char* getEquippedWeapon();

    /* Setters */
    void setName(char* Name) {name = strdup(Name);};

    /*Methods*/
    virtual int EditWeapon(char* charName);
    virtual int Attack(){};
    int EditWeapon(char* charName);
    void printName();
    

    /*Destructors*/
    ~Character();
};

#endif // CHARACTER_HPP