// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <player.hpp>
#include <epicCharacter.hpp>
#include <legendaryCharacter.hpp>

using namespace std;

bool addNewCharacterToData(Player &player)
{
     string name;
     Character character{};
     char input = '0';
     cout << "Character name:\t";
     cin >> name;
     cout << "Character type(E-Epic, L-legend, r-regular):" << endl;
     switch (input)
     {
     case 'E':
     case 'L':
     case 'r':
     default:
          cout << "invald key" << endl;
          break;
     }
}

bool editWeaponToCharacter(Player &player)
{
}

bool editActiveTeam(Player &player)
{
     cout << "a. Character1\n"
          << "b. Character2\n"
          << "c. Character3\n"
          << "d. Character4" << endl;
}

bool evaluateTeam(Player &player)
{
}

int main()
{
     Player player{};
     string name;
     char input = '0';
     cout << "Player name:\t";
     cin >> name;
     player.setName(name);
     // cin.clear();
     cout << "1 Add New Character to data \n"
          << "2 Edit Weapon to character (by name)\n"
          << "3 Edit active team (you choose who you want to swap - can be empty)\n"
          << "4 Evaluate Team\n"
          << "0 Exit" << endl;
     do
     {
          cin >> input;
          // cin.clear(); need to check **
          switch (input)
          {
          case '0':
               cout << "See Ya!" << endl;
               break;
          case '1':
               addNewCharacterToData(player);
               break;
          case '2':
               editWeaponToCharacter(player);
               break;
          case '3':
               editActiveTeam(player);
               break;
          case '4':
               evaluateTeam(player);
               break;
          default:
               cout << "invalid key" << endl;
               break;
          }
     } while (input != '0');
     return 0;
}