#include "Livre.h"

//Notre main qui va nous permettre de tester les méthodes de notre class Livre
int main(){
    //instancie par défaut un livre
    Livre livre1=Livre();
    //instancie par par initialisation un livre
    Livre livre2("Proprement codeur","Robert C. Martin","Pearson","Un livre de programmation","232600289X",30.00,242);
    //instancie par copie un livre
    Livre livre3(livre2);

    //teste de la méthodes sontLesMemeLivres
    //Si retourne vrai alors
    if(livre1.sontLesMemeLivres(livre2)){
        std::cout<<"Les livres sont identiques"<<std::endl;
    }
    //Si retourne faux alors
    else{
        std::cout<<"Les livres ne sont pas identiques"<<std::endl;
    }
        
    if(livre3.sontLesMemeLivres(livre2)){
        std::cout<<"Les livres sont identiques"<<std::endl;
    }
    else{
        std::cout<<"Les livres ne sont pas identiques"<<std::endl;
    }

    //test d'un getter
    std::cout<<"prix du livre 3 = "<<livre3.getPrix()<<std::endl;
    livre3.reduction(30);
    std::cout<<"Après reduc : prix du livre 3 = "<<livre3.getPrix()<<std::endl;

    return 0;
}