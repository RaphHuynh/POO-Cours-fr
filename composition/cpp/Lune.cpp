#include "Lune.h"

//composition dans le constructeur directement ! (déclaration et instanciation dans le constructeur)
Lune::Lune(string nom, int taille, string nomBat, int production):nom(nom),taille(taille),batiment(nomBat,production){};
//destructeur
Lune::~Lune(){cout<<"destruction de la lune"<<endl;}