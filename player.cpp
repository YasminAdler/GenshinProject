// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "player.hpp"
using namespace std;

/*Constructors*/
Player::Player()
{
numberOfCharacters = 0;
}

/*Getters*/
int Player::getNumberOfCharacters()
{
    return numberOfCharacters;
}
/*Setters*/
int Player::setNumberOfCharacters()
{
    numberOfCharacters = numberOfCharacters + 1;
    return numberOfCharacters;
}
/*Destructor*/
Player::~Player()
{

}

Character *Player::getCharacters()
{
    return dataCharacters;
}

void Player::evaluateTeam()
{
    for(int i = 0; i< 4; i++)
    {
        if(activeCharacters[i]->getElement() == (Element)0)
        {
            for(int j = 0; j<4; j++)
            {
                if(i == j)
                {
                    continue;
                }
                if(activeCharacters[j]->getElement() == (Element))
                
            }

        }



    }
}
