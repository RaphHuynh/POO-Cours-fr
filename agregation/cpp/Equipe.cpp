#include "Equipe.h"

Equipe::Equipe(string nom, int nombreDeJoueur, Joueur* joueur):nom(nom),nombreDeJoueur(nombreDeJoueur),joueur(joueur){};
Equipe::~Equipe(){
    cout<<"Destructeur equipe"<<endl;
}

string Equipe::getNom() const{
    return nom;
}

int Equipe::getNombreDeJoueur() const{
    return nombreDeJoueur;
}

Joueur* Equipe::getJoueur() const{
    return joueur;
}

void Equipe::afficherListeJoueur(){
    for(int i=0;i<nombreDeJoueur;i++){
            cout<<"Joueur "<<i+1<<" "<<joueur[i].getNom()<<" "<<joueur[i].getPrenom()<<" age : "<<joueur[i].getAge()<<" numéro : "<<joueur[i].getNumero()<<" poste : "<<joueur[i].getPoste()<<endl;
    }
}