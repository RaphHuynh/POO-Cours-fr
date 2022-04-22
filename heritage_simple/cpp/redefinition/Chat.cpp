#include "Chat.h"

Chat::Chat():Animal(){};
Chat::Chat(string nom, int nombreDePatte):Animal(nom,nombreDePatte){};
Chat::Chat(Chat const& chat):Animal(chat){};

//redéfinition de la méthode crier
inline void Chat::crier() const{
    cout<<"Miaou Meow !!!"<<endl;
}

Chat::~Chat(){};