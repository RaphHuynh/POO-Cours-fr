#include <iostream>

using namespace std;

class Joueur
{
private:
    string nom;
    string prenom;
    string poste;
    int age;
    int numero;

public:
    //constructeur par initialisation
    Joueur(string nom, string prenom, int numero, int age, string poste);
    //destructeur
    ~Joueur();
    string getNom() const;
    string getPrenom() const;
    string getPoste() const;
    int getNumero() const;
    int getAge() const;
    //pas de setters pour l'exemple car non utile pour notre exemple
};
