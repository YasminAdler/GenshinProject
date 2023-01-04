// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "element.hpp"
#include "weapon.hpp"
#include <string.h>
#include <iostream>

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
    char *getWeapon();
    Weapon getIntWeapon();
    char* getName(){return name;};
    char* getEquippedWeapon();
    void SetEquippedWeapon(char*);
    char* getLocation();
    Element getElement();

    /* Setters */
    void setName(char *Name) { name = strdup(Name); };

    /*Methods*/
    virtual void EditWeapon(char* charName);
    virtual void Attack(){};
    // int EditWeapon(char *charName);
    void printName();
    

    /*Destructors*/
    ~Character();
};
/* Stream operators */
std::ostream &operator<<(std::ostream &os, Character &character);

#endif // CHARACTER_HPP