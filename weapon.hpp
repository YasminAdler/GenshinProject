// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

enum Weapon
{
    Sword,
    Polearm,
    Catalyst,
    Claymore,
    Bow
};

char *WeaponName[]{
    {(char*)"Sword"},
    {(char*)"Polearm"},
    {(char*)"Catalyst"},
    {(char*)"Claymore"},
    {(char*)"Bow"}};
    
void printWeaponName()
{
    for(int i = 0; i<5; i++)
    {
        cout << i+1 << "."; 
        for(int j = 0; j<strlen(WeaponName[i]); j++)
        {
            cout << WeaponName[i][j];
        }
        cout <<"\n";
    }
}

#endif // WEAPON_HPP