#pragma once
#include <iostream>
#include "character.hpp"

class Player
{
private:
    char *userNamer;
    Character *activeCharacters[4];
    Character *dataCharacters;

public:
    /*Constructors*/
    Player();
    /*Destructor*/
    ~Player();
};