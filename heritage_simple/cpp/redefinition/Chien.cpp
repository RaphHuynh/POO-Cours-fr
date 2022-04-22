#include "Chien.h"

Chien::Chien():Animal(){};
Chien::Chien(string nom, int nombreDePatte):Animal(nom,nombreDePatte){};
Chien::Chien(Chien const& chien):Animal(chien){};

//redéfinition de la méthode crier

inline void Chien::crier() const{
    cout<<"Whouaf whouaf !!!"<<endl;
}

Chien::~Chien(){};