#include <iostream>
#include <string.h>

/*
Important à savoir ici ce sont les signatures des méthodes que l'on écrit
Les méthodes seront définis dans le fichier Livre.cpp
*/
class Livre{
    //tout ce qui est déclaré dans private est privé
    private:
        //attribut
        std::string titre;
        std::string auteur;
        std::string editeur;
        std::string resume;
        std::string isbn;
        double prix;
        int nombre_de_page;
    //tout ce qui est déclaré dans public est public
    public:
        //constructeur
        //par défaut
        Livre();
        //par initialisation
        Livre(std::string titre,std::string auteur,std::string editeur,std::string resume,std::string isbn, double prix, int nombre_de_page);
        //par copie
        Livre(Livre const& l);

        //destructeur
        ~Livre();

        //getters
        std::string getTitre() const;
        std::string getAuteur() const;
        std::string getEditeur() const;
        std::string getResume() const;
        std::string getIsbn() const;
        double getPrix() const;
        int getNbPage() const;

        //setters
        void setTitre(std::string titre);
        void setAuteur(std::string auteur);
        void setEditeur(std::string editeur);
        void setResume(std::string resume);
        void setIsbn(std::string isbn);
        void setPrix(double prix);
        void setNbPage(int nombre_de_page);

        //méthode
        //signature, prototype des méthodes
        void reduction(double reduction);
        bool sontLesMemeLivres(Livre const& l);
};