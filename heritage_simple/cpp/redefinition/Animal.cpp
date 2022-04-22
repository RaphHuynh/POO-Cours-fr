#include "Animal.h"

Animal::Animal():nom("defaut"),nombreDePatte(0){};
Animal::Animal(string nom, int nombreDePatte):nom(nom),nombreDePatte(nombreDePatte){};
Animal::Animal(Animal const& animal):nom(animal.nom),nombreDePatte(animal.nombreDePatte){};

string Animal::getNom() const{return nom;}
int Animal::getNombreDePatte() const{return nombreDePatte;}

void Animal::setNom(string nom){this->nom=nom;}
void Animal::setNbPatte(int nombreDePatte){this->nombreDePatte=nombreDePatte;}

void Animal::crier() const{
    cout<<"Reeuh"<<endl;
}

Animal::~Animal(){};