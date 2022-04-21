#include "Lune.h"

int main(){
    //déclaration, instanciation de l'objet lune avec la composition
    //du batiment directement dans le constructeur de la lune
    Lune lune("Ganymede",918000,"mine de métal",9000);
    lune.afficher();

    return 0;
}