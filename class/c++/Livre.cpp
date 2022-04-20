#include "Livre.h"

//constructeur
//par défaut
Livre::Livre(){
    titre="titre par defaut";
    auteur="auteur par defaut";
    editeur="éditeur par defaut";
    resume="resume par defaut";
    prix=0;
    isbn="0";
    nombre_de_page=0;
}

//par initialisation
Livre::Livre(std::string titre,std::string auteur,std::string editeur,std::string resume,std::string isbn, double prix, int nombre_de_page):auteur(auteur),titre(titre),editeur(editeur),resume(resume),isbn(isbn),prix(prix),nombre_de_page(nombre_de_page){};

//par copie
Livre::Livre(Livre const&l):titre(l.titre),auteur(l.auteur),editeur(l.editeur),resume(l.resume),isbn(l.isbn),prix(l.prix),nombre_de_page(l.nombre_de_page){};

//destructeur
Livre::~Livre(){
    std::cout<<"Destructeur"<<std::endl;
};

//getters
std::string Livre::getTitre() const{return titre;}
std::string Livre::getAuteur() const{return auteur;}
std::string Livre::getEditeur() const{return editeur;}
std::string Livre::getResume() const{return resume;}
std::string Livre::getIsbn() const{return isbn;}
double Livre::getPrix() const{return prix;}
int Livre::getNbPage() const{return nombre_de_page;}

//setters
void Livre::setTitre(std::string titre){this->titre=titre;}
void Livre::setAuteur(std::string auteur){this->auteur=auteur;}
void Livre::setEditeur(std::string editeur){this->editeur=editeur;}
void Livre::setResume(std::string resume){this->resume=resume;}
void Livre::setIsbn(std::string isbn){this->isbn=isbn;}
void Livre::setPrix(double prix){
    //Verifie si le prix entrer est supérieur à 0 (en effet un prix ne peut pas être négatif !)
    if(prix<0){
        std::cout<<"Le prix ne peut pas être inferieur à 0"<<std::endl;
    }
    else{
        this->prix=prix;
    }
}

void Livre::setNbPage(int nombre_de_page){
    //Le nombre de page ne peut pas être négatif et égale à 0!
    if(nombre_de_page<0){
        std::cout<<"Le nombre de page ne peut pas être inferieur à 0"<<std::endl;
    }
    else{
        this->nombre_de_page=nombre_de_page;
    }
}

//méthode
//réduction du prix en pourcentage
void Livre::reduction(double reduction){
    if(reduction<1||reduction>99){
        std::cout<<"La reduction doit être comprise en 0 et 100"<<std::endl;
    }
    else{
        //réduction en pourcentage
        prix=prix*(1-reduction/100);
    }
}

//méthode qui retroune vrai ou faux si les livres sont les même ou non
bool Livre::sontLesMemeLivres(Livre const& l){
    bool verif=true;
    //Si l'un des éléments n'est pas identiques alors la variable verif prend la valeur false
    //On ne compare pas le prix car le prix varie entre les boutiques.
    if(titre!=l.titre||auteur!=l.auteur||editeur!=l.editeur||resume!=l.resume||isbn!=l.isbn||nombre_de_page!=l.nombre_de_page){
        verif=false;
    }
    //retourne la valeur de la variable verif
    return verif;
}