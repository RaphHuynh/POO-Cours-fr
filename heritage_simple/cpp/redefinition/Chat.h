#ifndef CHAT_H
#define CHAT_H

#include "Animal.h"

class Chat : public Animal
{
private:
    //attribut de la classe chat
public:
    Chat();
    Chat(string nom, int nombreDePatte);
    Chat(Chat const& chat);
    void crier() const;
    ~Chat();
};

#endif