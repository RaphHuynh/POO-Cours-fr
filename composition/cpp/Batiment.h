#include <iostream>

using namespace std;

class Batiment
{
private:
    string nom;
    int production;
public:
    //constructeur par initialisation
    Batiment(string nom, int production);
    //destructeur
    ~Batiment();
    string getNom() const;
    int getProduction() const;
    //pas de setter (pas besoin pour l'exemple)
};