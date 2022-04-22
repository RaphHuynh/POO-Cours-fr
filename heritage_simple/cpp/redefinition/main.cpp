#include "Chat.h"
#include "Chien.h"

int main(){
    Animal animal= Animal();
    Chien chien("Médor",4);
    Chat chat("Miaouss",4);
    animal.crier();
    cout<<"Nombre de pattes de l'animal par défaut : " <<animal.getNombreDePatte()<<endl;
    //teste de la redéfinition
    chien.crier();
    chat.crier();
    //teste des getters hérité
    cout<<"Prenom du chien : "<<chien.getNom()<<endl;
    cout<<"Prenom du chat : "<<chat.getNom()<<endl;
    return 0;
}