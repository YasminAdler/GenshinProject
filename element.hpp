// Alon A. Rabinowitz 208142323
// Yasmin Adler 208462184
#ifndef ELEMENT_HPP
#define ELEMENT_HPP
// #include <string.h>
// #include <string>
// #include <iostream>
using namespace std;

enum Element
{
    nullElement = -1,
    Anemo,
    Pyro,
    Cryo,
    Hydro,
    Electro,
    Geo,
    Dendro
};

const char* ElementName[] = {
    {"Anemo (Wind)"},
    {"Pyro (Fire)"},
    {"Cryo (Frost)"},
    {"Hydro (Water)"},
    {"Electro (l mean-... common)"},
    {"Geo (Earth)"},
    {"Dendro (Nature)"}};
    
#endif // ELEMENT_HPP
