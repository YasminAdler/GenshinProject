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
    Character **dataCharacters;
    unsigned numberOfCharacters;

public:
    /* Constructors */
    Player();
    
    /*Getters*/
    unsigned getNumberOfCharacters(); 

    /* Setters */
    void setPlayerName(char *Name);
    unsigned setNumberOfCharacters();
    void addCharacterToData(Character *);
    void setActiveCharacter(unsigned, Character *);

    /* Getters */
    Character *getDataCharacter(unsigned characterNumber); // use this to get the data characters array
    Character *getActiveCharacter(unsigned characterNumber); // use this to get the active characters array

    /*Mathods*/
    void evaluateTeam(std::ostream& osOut); // use this in option 4 in main
    void editWeaponToCharacter();


    
    /* Destructor */
    ~Player();
};

/* Stream operators */

#endif // PLAYER_HPP