#include "Equipe.h"

int main(){
    //instanciations des joueurs
    Joueur joueur1("Bryant","Kobe",24,41,"Arriere");
    Joueur joueur2("Lebron","James",6,37,"Allier");
    Joueur joueur3("Adbul-Jabbar","Kareem",33,75,"pivot");
    Joueur joueur4("Davis","Anthony",3,29,"Allier fort");
    Joueur joueur5("Magic","Jonhson",32,62,"Meneur");
    //liste des joueurs de l'équipe
    Joueur joueur [5]={joueur1,joueur2,joueur3,joueur4,joueur5};
    //instanciation de l'équipe avec la liste des joueurs
    Equipe equipe("Leganday Lakers",5,joueur);
    //affichage de la liste des joueurs de l'équipe
    equipe.afficherListeJoueur();

    return 0;
}