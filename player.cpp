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

Character *Player::getCharacter(int characterNumber)
{
    return activeCharacters[characterNumber];
}

Character *Player::getCharacters()
{
    return dataCharacters;
}

/*Setters*/
int Player::setNumberOfCharacters()
{
    numberOfCharacters = numberOfCharacters + 1;
    return numberOfCharacters;
}

/*Mathods*/
void Player::evaluateTeam()
{
    cout << "Passable Elements Reactions:\n";

    for (int i = 0; i < 4; i++)
    {
        if (activeCharacters[i]->getElement() == (Element)0) // if element == Anemo
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)2)
                {
                    cout << "Blizzard\n", "Swirl\n";
                }

                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    cout << "Dust\n";
                }

                if (activeCharacters[j]->getElement() == (Element)4 ||
                    activeCharacters[j]->getElement() == (Element)3 ||
                    activeCharacters[j]->getElement() == (Element)1)
                {
                    cout << "Swirl\n";
                }

                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    cout << "Dust\n";
                }
            }
        }

        if (activeCharacters[i]->getElement() == (Element)1) // if element == Pyro
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)6)
                {
                    cout << "Burn\n";
                }

                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    cout << "Magma\n";
                }

                if (activeCharacters[j]->getElement() == (Element)2)
                {
                    cout << "Melt\n";
                }

                if (activeCharacters[j]->getElement() == (Element)3)
                {
                    cout << "Vaporize\n";
                }
                if (activeCharacters[j]->getElement() == (Element)4)
                {
                    cout << "Overloaded\n";
                }
            }
        }

        if (activeCharacters[i]->getElement() == (Element)2) // if element == Cryo
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    cout << "Shatter\n";
                }
            }
        }

        if (activeCharacters[i]->getElement() == (Element)3) // if element == Hydro
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)4)
                {
                    cout << "Electro-Charged\n";
                }

                if (activeCharacters[j]->getElement() == (Element)2)
                {
                    cout << "Frozen\n";
                }

                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    cout << "Mud\n";
                }

                if (activeCharacters[j]->getElement() == (Element)6)
                {
                    cout << "Poison\n";
                }
            }
        }

        if (activeCharacters[i]->getElement() == (Element)4) // if element == Electro
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)2)
                {
                    cout << "Superconductor\n";
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
                    cout << "Crystalize\n";
                }
            }
        }
        if (activeCharacters[i]->getElement() == (Element)4) // if element == Dendro
        {
            for (int j = 0; j < 4; j++)
            {
                if (activeCharacters[j]->getElement() == (Element)5)
                {
                    cout << "Thorn\n";
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
        cout << flagLocation << " Characters are from the same location:\n"
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
        cout << flagElement << " Characters have the same Element:\n"
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