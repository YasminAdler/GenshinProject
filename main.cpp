// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <player.hpp>
#include <epicCharacter.hpp>
#include <legendaryCharacter.hpp>

using namespace std;

bool addNewCharacterToData()
{
     string characterName;
     
}

bool editWeaponToCharacter()
{
}

bool editActiveTeam()
{
     cout << "a. Character1\n"
          << "b. Character2\n"
          << "c. Character3\n"
          << "d. Character4" << endl;
}

bool evaluateTeam()
{
}

int main()
{
     char input = '0';
     do
     {
          cout << "1. Add New Character to data \n"
               << "2. Edit Weapon to character (by name)\n"
               << "3. Edit active team (you choose who you want to swap - can be empty)\n"
               << "4. Evaluate Team" << endl;
          cin >> input;
          // cin.clear(); need to check **
          switch (input)
          {
          case '1':
               addNewCharacterToData();
               break;
          case '2':
               editWeaponToCharacter();
               break;
          case '3':
               editActiveTeam();
               break;
          case '4':
               evaluateTeam();
               break;
          default:
               cout << "invalid key" << endl;
          }
     } while (input != '0');
     return 0;
}