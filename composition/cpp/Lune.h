#include "Batiment.h"

class Lune
{
private:
    string nom;
    int taille;
    Batiment batiment;
public:
    //constructeur par initialisation
    Lune(string nom, int taille, string nomBat, int production);
    //destructeur
    ~Lune();
    //pas de getter ni de setter (pas besoin pour l'exemple)
    void afficher(){
        cout<<"taille de la lune "<<nom<<" : "<<taille<<"km"<<endl;
        cout<<"Batiment sur "<<nom<<" : "<<batiment.getNom()<<" production par h : "<<batiment.getProduction()<<endl;
    }
};