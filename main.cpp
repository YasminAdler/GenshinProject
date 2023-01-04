// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include "player.hpp"
#include "epicCharacter.hpp"
#include "legendaryCharacter.hpp"

using namespace std;

void EditLegendaryWeaponToLegendaryCharacter(LegendaryCharacter *character)
{
     character->EditLegendaryWeapon(character->getName());
}

bool addNewCharacterToPlayer(Player &player)
{
     char name[CHAR_MAX];
     char input = '0';
     cout << "Character name:\t";
     cin >> name;
     cout << "Character type(E-Epic, L-legend):" << endl;
     do
     {
          cin >> input;
          cin.clear();
          switch (input)
          {
          case 'E':
          {
               EpicCharacter *character = new EpicCharacter();
               character->setName(name);
               player.addCharacterToData(character);
               break;
          }
          case 'L':
          {
               LegendaryCharacter *character = new LegendaryCharacter(); 
               // EditLegendaryWeaponToLegendaryCharacter(character);
               character->setName(name);
               player.addCharacterToData(character);
               break;
          }
          default:
               cout << "invald key" << endl;
               break;
          }
     } while (input != 'E' || input != 'L');
     return true;
}

void editWeaponToCharacter(Player &player)
{
     Character *character;
     char input;
     cout << "Which character?\n"
          << "a. " << player.getActiveCharacter(0) << "\n"
          << "b. " << player.getActiveCharacter(1) << "\n"
          << "c. " << player.getActiveCharacter(2) << "\n"
          << "d. " << player.getActiveCharacter(3) << endl;
     do
     {
          cin >> input;
          cin.clear();
          if (input < 'a' || input > 'd')
               cout << "Invalid input";
     } while (input < 'a' || input > 'd');
     character = player.getDataCharacter((unsigned)(input - 'a'));
     character->EditWeapon(character->getName());
}

bool editActiveTeam(Player &player)
{
     char *input = nullptr;
     int characterNumber = 0;
     unsigned numOfCharachters = player.getNumberOfCharacters();
     cout << "Which character to add to the active team?";
     do
     {
          for (unsigned i = 0; i < numOfCharachters; i++)
          {
               cout << i + 1 << " " << player.getActiveCharacter(i) << endl;
          }
          cin >> input;
          cin.clear();
          characterNumber = stoi(input);
          if (characterNumber < 0 || characterNumber >= (int)numOfCharachters)
               cout << "Invalid number" << endl;
     } while (characterNumber < 0 || characterNumber >= (int)numOfCharachters);
     cout << "Replace with which character?\n"
          << "a. " << player.getActiveCharacter(0) << "\n"
          << "b. " << player.getActiveCharacter(1) << "\n"
          << "c. " << player.getActiveCharacter(2) << "\n"
          << "d. " << player.getActiveCharacter(3) << endl;
     cin >> input;
     cin.clear();
     player.setActiveCharacter((unsigned)(input[0] - 'a'), player.getDataCharacter((unsigned)characterNumber));
     return true;
}

int main()
{
     Player player{};
     char name[CHAR_MAX];
     char input = '0';
     cout << "Player name:\t";
     cin >> name;
     player.setPlayerName(name);
     // cin.clear();
     cout << "1 Add New Character to data \n"
          << "2 Edit Weapon to character (by name)\n"
          << "3 Edit active team (you choose who you want to swap - can be empty)\n"
          << "4 Evaluate Team\n"
          << "0 Exit" << endl;
     do
     {
          cin >> input;
          cin.clear(); //need to check ***
          switch (input)
          {
          case '0':
               cout << "See Ya!" << endl;
               break;
          case '1':
               addNewCharacterToPlayer(player);
               break;
          case '2':
               editWeaponToCharacter(player);
               break;
          case '3':
               editActiveTeam(player);
               break;
          case '4':
               player.evaluateTeam(cout);
               break;
          default:
               cout << "invalid key" << endl;
               break;
          }
     } while (input != '0');
     return 0;
}