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