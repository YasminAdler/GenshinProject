// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#include <iostream>
#include <player.hpp>
#include <epicCharacter.hpp>
#include <legendaryCharacter.hpp>

using namespace std;

void addLegendaryWeaponToLegendaryCharacter(LegendaryCharacter *character)
{
}

bool addNewCharacterToData(Player &player)
{
     char name[CHAR_MAX];
     Character *character = new Character{};
     char input = '0';
     cout << "Character name:\t";
     cin >> name;
     character->setName(name);
     cout << "Character type(E-Epic, L-legend):" << endl;
     do
     {
          cin >> input;
          switch (input)
          {
          case 'E':
               // ** May not work needs to be checked
               EpicCharacter *character = dynamic_cast<EpicCharacter *>(character);
               break;
          case 'L':
               LegendaryCharacter *character = dynamic_cast<LegendaryCharacter *>(character);
               addLegendaryWeaponToLegendaryCharacter(character);
               break;
          default:
               cout << "invald key" << endl;
               break;
          }
     } while (input != 'E' || input != 'L');
     player.addCharacter(character);
}

bool editWeaponToCharacter(Player &player)
{
     Character *character;
     char *name;
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
     character = player.getDataCharacter(input - 'a');
     cout << "Input new weapon: ";
     cin >> name;
     character->EditWeapon(name);
}

bool editActiveTeam(Player &player)
{
     char *input;
     int characterNumber;
     unsigned numOfCharachters = player.getNumberOfCharacters();
     cout << "Which character to add to the active team?";
     for (unsigned i = 0; i < numOfCharachters; i++)
     {
          cout << i + 1 << " " << player.getActiveCharacter(i) << endl;
     }
     cin >> input;
     cin.clear();
     characterNumber = stoi(input);
     cout << "Which character?\n"
          << "a. " << player.getActiveCharacter(0) << "\n"
          << "b. " << player.getActiveCharacter(1) << "\n"
          << "c. " << player.getActiveCharacter(2) << "\n"
          << "d. " << player.getActiveCharacter(3) << endl;
     cin >> input;
     cin.clear();
     player.setActiveCharacter(input[0] - 'a', player.getDataCharacter(characterNumber));
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
               player.evaluateTeam();
               break;
          default:
               cout << "invalid key" << endl;
               break;
          }
     } while (input != '0');
     return 0;
}