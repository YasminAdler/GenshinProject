// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "element.hpp"
#include "weapon.hpp"

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
    /*Destructors*/
    ~Character();

    /* Setters */
    void setName(string name);

    /*Methods*/
    int virtualAttack();
    int EditWeapon(char *);
};

#endif // CHARACTER_HPP