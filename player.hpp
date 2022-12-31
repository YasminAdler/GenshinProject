// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <iostream>
#include "character.hpp"

class Player
{
private:
    char *userNamer;
    Character *activeCharacters[4];
    Character *dataCharacters;

public:
    /* Constructors */
    Player();

    /* Setters */
    void setName(string);

    /* Destructor */
    ~Player();
};

/* Stream operators */

#endif // PLAYER_HPP