#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal{
private:
    /*Méthode ou attribut dont la classe fille n'a pas accès*/
protected:
    /*Seule les filles ont directement accès aux méthodes ou attributs*/
    string nom;
    int nombreDePatte;
public:
    Animal();
    Animal(string nom, int nombreDePatte);
    Animal(Animal const& animal);
    string getNom() const;
    int getNombreDePatte() const;
    void setNom(string nom);
    void setNbPatte(int nombreDePatte);
    virtual void crier() const;
    ~Animal();
};

#endif