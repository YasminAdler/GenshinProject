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
    void setName(string);
    int setNumberOfCharacters();
    void addCharacter(Character *);
    void setActiveCharacter(int, Character *);

    /* Getters */
    Character *getDataCharacter(int characterNumber);
    Character *getActiveCharacter(int characterNumber);
    Character *getCharacters();

    /*Mathods*/
    void evaluateTeam();
    void editWeaponToCharacter();


    
    /* Destructor */
    ~Player();
};

/* Stream operators */

#endif // PLAYER_HPP