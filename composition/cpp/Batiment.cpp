#include "Batiment.h"

//constructeur par initialisation
Batiment::Batiment(string nom, int production):nom(nom),production(production){};
//destructeur
Batiment::~Batiment(){
    cout<<"destruction du batiment"<<endl;
}

string Batiment::getNom() const{
    return nom;
}

int Batiment::getProduction() const{
    return production;
}