#include "Joueur.h"

//constructeur par initialisation
Joueur::Joueur(string nom, string prenom, int numero, int age, string poste):nom(nom),prenom(prenom),numero(numero),age(age),poste(poste){};
//destructeur
Joueur::~Joueur(){
    cout<<"Desctructeur joueur"<<endl;
}

//getters
string Joueur::getPrenom() const{
    return prenom;
}

string Joueur::getNom() const{
    return nom;
}

int Joueur::getNumero() const{
    return numero;
}

int Joueur::getAge() const{
    return age;
}

string Joueur::getPoste() const{
    return poste;
}