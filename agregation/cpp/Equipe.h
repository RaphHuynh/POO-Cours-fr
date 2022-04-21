#include "Joueur.h"

class Equipe
{
private:
    string nom;
    int nombreDeJoueur;
    Joueur* joueur;

public:
    //constructeur
    Equipe(string nom,int nombreDeJoueur,Joueur* joueur);
    //destructeur
    ~Equipe();

    //liste des getters
    string getNom() const;
    int getNombreDeJoueur() const;
    Joueur* getJoueur() const;

    //Nous ne ferons pas de setters pour aller a l'essentiel directement

    //méthode permettant d'afficher la liste des joueurs et leur caractéristique
    void afficherListeJoueur();
};