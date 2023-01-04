// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <iostream>
#include "character.hpp"

class Player
{
private:
    char *userName;
    Character *activeCharacters[4];
    Character *dataCharacters;
    int numberOfCharacters;

public:
    /* Constructors */
    Player();
    
    /*Getters*/
    int getNumberOfCharacters(); 

    /* Setters */
    void setName(char *Name);
    int setNumberOfCharacters();
    void addCharacterToData(Character *);
    void setActiveCharacter(int, Character *);

    /* Getters */
    Character *getDataCharacter(int characterNumber); // use this to get the data characters array
    Character *getActiveCharacter(int characterNumber); // use this to get the active characters array

    /*Mathods*/
    void evaluateTeam(); // use this in option 4 in main
    void editWeaponToCharacter();


    
    /* Destructor */
    ~Player();
};

/* Stream operators */

#endif // PLAYER_HPP