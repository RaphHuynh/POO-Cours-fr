#ifndef CHIEN_H
#define CHIEN_H

#include "Animal.h"

class Chien : public Animal
{
private:
    //attribut de la classe chien
public:
    Chien();
    Chien(string nom, int nombreDePatte);
    Chien(Chien const& chien);
    void crier() const;
    ~Chien();
};

#endif