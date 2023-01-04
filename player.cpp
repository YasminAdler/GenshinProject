// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <cstring>
#include "player.hpp"
using namespace std;

/* Constructors */
Player::Player() : numberOfCharacters(0) {}

/* Getters */
unsigned Player::getNumberOfCharacters()
{
    return numberOfCharacters;
}

Character *Player::getActiveCharacter(unsigned characterNumber)
{
    return activeCharacters[characterNumber];
}

void Player::setPlayerName(char *Name)
{
    userName = strdup(Name);
}

/* Setters */
unsigned Player::setNumberOfCharacters()
{
    numberOfCharacters = numberOfCharacters + 1;
    return numberOfCharacters;
}
// static ostream osOut;
// static istream osIn;

/* Methods */
void Player::evaluateTeam(ostream &osOut)
{
    osOut << "Passable Elements Reactions:\n";

    for (int i = 0; i < 4; i++)
    {
        if (activeCharacters[i]->getElement() == (Element)0) // if element == Anemo
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)2)
                {
                    osOut << "Blizzard & Swirl\n";
                }

                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    osOut << "Dust\n";
                }

                if (activeCharacters[j]->getElement() == (Element)4 ||
                    activeCharacters[j]->getElement() == (Element)3 ||
                    activeCharacters[j]->getElement() == (Element)1)
                {
                    osOut << "Swirl\n";
                }

                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    osOut << "Dust\n";
                }
            }
        }

        if (activeCharacters[i]->getElement() == (Element)1) // if element == Pyro
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)6)
                {
                    osOut << "Burn\n";
                }

                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    osOut << "Magma\n";
                }

                if (activeCharacters[j]->getElement() == (Element)2)
                {
                    osOut << "Melt\n";
                }

                if (activeCharacters[j]->getElement() == (Element)3)
                {
                    osOut << "Vaporize\n";
                }
                if (activeCharacters[j]->getElement() == (Element)4)
                {
                    osOut << "Overloaded\n";
                }
            }
        }

        if (activeCharacters[i]->getElement() == (Element)2) // if element == Cryo
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    osOut << "Shatter\n";
                }
            }
        }

        if (activeCharacters[i]->getElement() == (Element)3) // if element == Hydro
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)4)
                {
                    osOut << "Electro-Charged\n";
                }

                if (activeCharacters[j]->getElement() == (Element)2)
                {
                    osOut << "Frozen\n";
                }

                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    osOut << "Mud\n";
                }

                if (activeCharacters[j]->getElement() == (Element)6)
                {
                    osOut << "Poison\n";
                }
            }
        }

        if (activeCharacters[i]->getElement() == (Element)4) // if element == Electro
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)2)
                {
                    osOut << "Superconductor\n";
                }
            }
        }

        if (activeCharacters[i]->getElement() == (Element)5) // if element == Geo
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)2 ||
                    activeCharacters[j]->getElement() == (Element)4 ||
                    activeCharacters[j]->getElement() == (Element)3 ||
                    activeCharacters[j]->getElement() == (Element)1)
                {
                    osOut << "Crystalize\n";
                }
            }
        }
        if (activeCharacters[i]->getElement() == (Element)4) // if element == Dendro
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    osOut << "Thorn\n";
                }
            }
        }
    }

    // Same location characters:
    for (int i = 0; i < 4; i++)
    {
        int flagLocation = 0;
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
                continue;
            if (strcmp(activeCharacters[j]->getLocation(), activeCharacters[i]->getLocation()) == 0)
            {
                flagLocation++;
            }
        }
        osOut << flagLocation << " Characters are from the same location:\n"
              << "Adding " << flagLocation << "0%"
              << " coordination\n";
    }

    // same Element characters:
    for (int i = 0; i < 4; i++)
    {
        int flagElement = 0;
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
                continue;
            if (activeCharacters[j]->getElement() == activeCharacters[i]->getElement())
            {
                flagElement++;
            }
        }
        osOut << flagElement << " Characters have the same Element:\n"
              << "Adding " << flagElement << "0%"
              << " coordination\n";
    }
}

void Player::editWeaponToCharacter()
{
}

/*Destructor*/
Player::~Player()
{
}