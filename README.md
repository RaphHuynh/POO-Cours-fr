# POOfr
Code provenant du cours de POO disponible sur : 
<p>https://exuberant-sense-e84.notion.site/Programmation-orient-e-objet-838961e1c11e40ee9e674d6261381979</p>

---

# Programmation orientée objet

Creation: April 19, 2022 9:50 PM
Language: French
Status: In Progress
Type: C++, Java, POO

<aside>
⚠️ Ce cours n’est pas un cours de C++ ou de Java.
Ces langages sont utilisés comme exemple.

</aside>

# SOMMAIRE

1. La programmation orientée objet
    - Qu’est-ce que la poo ?
    - Qu’est-ce qu’un objet ?
    - Qu’est-ce qu’une classe ?
    - Agrégation et composition
2. Héritage
    - Qu’est-ce que l’héritage ?
    - Héritage simple
    - Polymorphisme
    - Redéfinition
    - Surcharge
    - Héritage multiple
3. UML
    - Diagramme de classe
    - Diagramme
    - Diagramme
    - Diagramme
    - Diagramme

### Index

[Index - Cours par partie (clic sur la partie qui t’interesse) cours complet en bas de l’index](https://www.notion.so/e8884c40db084e798a92873963fac881)

---

# La programmation orientée objet

<aside>
⚠️ Code du cours disponible sur mon github voici le lien :

</aside>

[GitHub - RaphHuynh/POOfr: Code provenant du cours de POO disponible sur : https://exuberant-sense-e84.notion.site/Programmation-orient-e-objet-838961e1c11e40ee9e674d6261381979](https://github.com/RaphHuynh/POOfr)

## Qu’est-ce que la poo ?

La programmation orientée objet est une façon d’approcher la programmation afin de répondre à un problème donné. Elle consiste à la définition et l’interaction d’objets.

La poo permet de transcrire ces objets sous forme virtuelle.

## Qu’est-ce qu’un objet ?

Un objet représente un concept, une idée ou une entité physique. On peut prendre pour exemple une voiture, un livre, une personne etc…

Un objet se définit par plusieurs aspects. Il possède une structure ainsi qu’un comportement. Il a la possibilité d’agir sur d’autres entités.

> Dans ce contexte, un objet est donc une structure de données qui répond à un ensemble de messages. Cette structure de données définit son état tandis que l’ensemble des messages qu’il comprendre décrit son comportement. (Wikipédia)
> 

Les données décrivant la structure internet de l’objet sont appelées les attributs.

Les messages forment l’interface de l’objet, C’est au travers de ces messages que les objets peuvent interagir entre eux. Ainsi, la réponse à la réception d’un message est appelée une méthode, en effet, elle décrit la réponse qu’elle doit exécuter à la réception du message.

## Qu’est-ce qu’une classe ?

Une classe est une structure particulière dans les langages objets. Elle définit les attributs ainsi que les méthodes qui s’applique à l’objet.

### Attribut

Les attributs sont aussi appelés variable d’instance. Ils définissent les caractéristiques de l’objet.

Exemple :

Prenons l’exemple d’un livre.

Un livre se caractérise par son prix, son titre, son résumé, son isbn (numéro d’identifiant de livre), son ou ses auteur(s), sa maison d’édition, son nombre de page etc.

Chacune de ces caractéristiques représentent un attribut.

### Méthode

Un objet se définit aussi par ces méthodes. Une méthode permet d’interagir directement avec l’objet ou de faire interagir les objets entre eux.

Exemple :

Reprenons l’exemple du livre.

Nous voulons modifier le prix d’un livre en lui faisant une réduction. Pour cela, nous allons interagir avec l’objet en lui envoyant comme message la reduction du prix qu’il devra enregistrer ainsi la liaison se fait par la méthode.

Nous avons précisé précédemment, qu’il était possible de faire communiquer des objets entre eux. En effet, imaginons que nous voulons savoir si deux livres sont identiques. Dans ce cas il faudra comparer les attributs des deux livres entre eux. Il faudra après renvoyer la réponse.

Il faut aussi noter qu’un objet peut interagir avec un autre objet qui n’est pas de la même nature.
Imaginons l’objet voiture et l’objet pneu.
Quand la voiture va freiner le pneu va subir une usure en fonction de la vitesse de la voiture et de la puissance de freinage.
Il y a donc interaction entre les 2 objets qui ne sont pas de la même nature puisse qu’une voiture n’est pas un pneu, vis versa.
Cette notion sera approfondis dans la partie agrégation et composition.

Une méthode modifie soit l’objet, soit elle retourne une réponse. Comme pour les fonctions/procédure.

Il existe des méthodes spécifiques aux classes.

Il y a les getters et les setters.

Les getters permettent de renvoyer la valeur d’un attribut de l’objet.

Les setters modifient la valeur de l’attribut de l’objet.

### Constructeur

Une classe possède un constructeur afin de pouvoir instancier l’objet. En effet, la classe définit l’objet mais ne l’instancie pas.

Il existe 3 types de classes.

- Le constructeur par défaut, qui instancie par défaut un objet en ajoutant par défaut des valeurs aux variables d’instances (attributs).
- Le constructeur par initialisation. Celui-ci permet d’instancier l’objet avec des valeurs que nous choisissons. Ainsi, au moment de l’initialisation de l’objet, nous pouvons définir les valeurs de ses attributs.
- Le constructeur par copie, lui copie les valeurs d’un objet déjà instancié et ajoute les valeurs de cet objet au nouvel objet. Ainsi, les attributs auront les mêmes valeurs que l’autre objet.

En C++, il existe un autre type de constructeur. Le constructeur par référence.

### Destructeur

Le destructeur est le contraire du constructeur. Il permet de détruire un objet instancié.

### Porter d’une classe

La porter est une notion importante en programmation orientée objet.
En effet, il existe 3 porter.
La porter public, protected et private.
Public signifie que tout le monde peut avoir accès à l’attribut ou à la méthode.
Protected signifie que seule les filles de la classe mère ont accès à la méthode protected ou à l’attribut.
Private signifie qu’il n’y à que l’objet qui a accès à l’attribut ou à la méthode.

Dans le cadre de la poo la plus part des attributs sont private (pour des questions de sécurité) hors exceptions en ce qui concerne par exemple l’héritage ou autre.
Les méthodes sont elles pour la plus part public.

### Exemple d’une classe en JAVA : (livre)

<aside>
⚠️ Code disponible sur github

</aside>

fichier [Livre.java](http://Livre.java) dans le document pack

```java
//fichier Livre.java
package pack;

public class Livre{
    //attribut
    private String titre;
    private String auteur;
    private String editeur;
    private String resume;
    private double prix;
    private int isbn;
    private int nombre_de_page;

    //constructeur
    //par défaut
    public Livre(){
        titre="titre par defaut";
        auteur="auteur par defaut";
        editeur="éditeur par defaut";
        resume="resume par defaut";
        prix=0;
        isbn=0;
        nombre_de_page=0;
    }

    //par initialisation les valeurs que l'on va rajouter sont en paramètre du constructeur comme dans une fonction
    public Livre(String titre,String auteur,String editeur, String resume, double prix, int isbn, int nombre_de_page){
        //le this permet de dire que l'on vite l'attribut de l'objet de la classe afin de faire la distinction avec le paramètre du constructeur
        this.auteur=auteur;
        this.titre=titre;
        this.editeur=editeur;
        this.resume=resume;
        this.prix=prix;
        this.isbn=isbn;
        this.nombre_de_page=nombre_de_page;
    }

    //par copie, un objet livre deja instancié est passé en paramètre
    public Livre(Livre l){
        //l.titre permet d'appeler l'attribut du livre l passé en paramètre de la méthode
        titre=l.titre;
        auteur=l.auteur;
        editeur=l.editeur;
        resume=l.resume;
        prix=l.prix;
        isbn=l.isbn;
        nombre_de_page=l.nombre_de_page;
    }

    //getters
    public String getTitre(){
        return titre;
    }

    public String getAuteur(){
        return auteur;
    }

    public String getResume(){
        return resume;
    }

    public String getEditeur(){
        return editeur;
    }

    public double getPrix(){
        return prix;
    }

    public int getIsbn(){
        return isbn;
    }

    public int getNbPage(){
        return nombre_de_page;
    }

    //setters
    public void setTitre(String titre){
        this.titre=titre;
    }

    public void setAuteur(String auteur){
        this.auteur=auteur;
    }

    public void setEditeur(String editeur){
        this.editeur=editeur;
    }

    public void setResume(String resume){
        this.resume=resume;
    }

    public void setPrix(double prix){
        //Verifie si le prix entrer est supérieur à 0 (en effet un prix ne peut pas être négatif !)
        if(prix>=0){
            this.prix=prix;
        }
    }

    public void setIsbn(int isbn){
        //L'isbn ne peut pas être négatif !
        if(isbn>=0){
            this.isbn=isbn;
        }
    }

    public void setNombrePage(int nombre_de_page){
        //Le nombre de page ne peut pas être négatif et égale à 0!
        if(nombre_de_page>0){
            this.nombre_de_page=nombre_de_page;
        }
    }

    //méthode
    //réduction du prix en pourcentage
    public void reduction(double reduction){
        if(reduction<1||reduction>99){
            System.out.println("La reduction doit être comprise en 0 et 100\n");
        }
        else{
            //réduction en pourcentage
            prix=prix*(1-reduction/100);
        }
    }

    //méthode qui retroune vrai ou faux si les livres sont les même ou non
    public boolean sontLesMemeLivres(Livre l){
        boolean verif=true;
        //Si l'un des éléments n'est pas identiques alors la variable verif prend la valeur false
        //On ne compare pas le prix car le prix varie entre les boutiques.
        if(titre!=l.titre||auteur!=l.auteur||editeur!=l.editeur||resume!=l.resume||isbn!=l.isbn||nombre_de_page!=l.nombre_de_page){
            verif=false;
        }
        //retourne la valeur de la variable verif
        return verif;
    }

    //destructeur
    /*En java le destructeur est une méthode spéciale qui sera appelé si elle est redéfinie dans la classe 
    lorsque l'objet sera nettoyé de la mémoire par le
    */
    public void finalize(){
        System.out.print("Le livre a été détruit\n");
    }
}
```

Fichier [main.java](http://main.java) afin de tester la classe

```java
//fichier main.java
import pack.Livre;

//Pour faire un main il faut créer une class main car en java tout est objet ! donc même le main est objet
public class main{
    //Notre main qui va nous permettre de tester les méthodes de notre class Livre
    public static void main(String[] args){
        //instancie par défaut un livre
        Livre livre1= new Livre();
        //instancie par par initialisation un livre
        Livre livre2= new Livre("Proprement codeur","Robert C. Martin","Pearson","Un livre de programmation",30.00,"232600289X",242);
        //instancie par copie un livre
        Livre livre3= new Livre(livre2);
        
        //teste de la méthodes sontLesMemeLivres
        //Si retourne vrai alors
        if(livre1.sontLesMemeLivres(livre2)){
            System.out.println("Les livres sont identiques");
        }
        //Si retourne faux alors
        else{
            System.out.println("Les livres ne sont pas identiques");
        }

        if(livre3.sontLesMemeLivres(livre2)){
            System.out.println("Les livres sont identiques");
        }
        else{
            System.out.println("Les livres ne sont pas identiques");
        }

        //teste d'un getter
        System.out.println("prix du livre 3 = "+livre3.getPrix());
        //teste de la méthode reduction
        livre3.reduction(30);
        //vérifie si ma réduction c'est bien faite
        System.out.println("Après réduction : prix du livre 3 = "+livre3.getPrix());
        //teste destructeur
        livre3.finalize();
    }
}
```

Commande à entrer dans le terminal pour tester :

Depuis le repertoire java dans le répertoire class

```powershell
java main.java
#si vous avez télécharger le code depuis github

#sinon voici les étapes
javac Livre.java
#création d'un fichier Livre.class
javac -d . Livre.java
#création du package/répertoire pack avec Livre.class dedans
#il faut déplacer Livre.java dans le répertoire pack
java main.java
#le code devrait s'exécuter

#vous devriez avoir en réponse ceci
Les livres ne sont pas identiques
Les livres sont identiques
prix du livre 3 = 30.0
Après réduction : prix du livre 3 = 21.0
Le livre a été détruit
```

### Exemple de class en C++ : (livre)

Fichier Livre.h :

```cpp
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
```

Fichier Livre.cpp

```cpp
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
Livre::Livre(Livre const& l):titre(l.titre),auteur(l.auteur),editeur(l.editeur),resume(l.resume),isbn(l.isbn),prix(l.prix),nombre_de_page(l.nombre_de_page){};

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
```

Fichier main.cpp

```cpp
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
```

Commande à entrer dans le terminal pour tester :

Depuis le repertoire c++ dans le répertoire class

```powershell
#si le code a été télécharger sur github
./myprogram
#sinon 
g++ main.cpp -o main.o -c
g++ Livre.cpp -o Livre.o -c
g++ -o myprogram main.o Livre.o
./myprogram
#Vous devriez obtenir ceci
Les livres ne sont pas identiques
Les livres sont identiques
prix du livre 3 = 30
Après reduc : prix du livre 3 = 21
Destructeur
Destructeur
Destructeur
```

## Agrégation et composition

L’agrégation et la composition est une association qui relie deux (ou plus) classes (objets). En revanche, cette association entre ces objets est dite non symétrique. C’est-à-dire que l’association ne se lie pas indistinctement dans les 2 sens.
L’agrégation et la composition modélise une situation où l’une des classes joue un rôle particulier dans cette association.

### Agrégation

C’est une relation particulière, elle attribut le rôle d’agrégat à une des classes et le rôle d’agrégé à l’autre classe.
En outre, ça signifie que la classe X a une classe Y.

Par exemple une équipe de sport a des joueurs. Equipe étant la classe X et joueur la classe Y.

Par conséquent, si l’équipe est détruite les joueurs eux existent toujours !
C’est important de retenir cette notions, en ce qui concerne l’agrégation.

### Exemple d’agrégation en JAVA et C++

CODE JAVA :

Fichier Joueur.java

```java
package packAgre;

public class Joueur {
    private String nom;
    private String prenom;
    private int numero;
    private int age;
    private String poste;

    //constructeur par initialisation
    public Joueur(String nom, String prenom, int numero, int age, String poste){
        this.nom=nom;
        this.prenom=prenom;
        this.numero=numero;
        this.age=age;
        this.poste=poste;
    }

    //getters
    public String getNom(){
        return nom;
    }

    public String getPrenom(){
        return prenom;
    }

    public int getNumero(){
        return numero;
    }

    public int getAge(){
        return age;
    }

    public String getPoste(){
        return poste;
    }

    //pas de setters pour l'exemple car non utile

    //pas de méthode car pas necessaire dans l'exemple

    //destructeur
    public void finalize(){
        System.out.println("Le joueur n'existe plus");
    }
}
```

Fichier Equipe.java

```java
package packAgre;

public class Equipe {
    private String nom;
    private int nombreDeJoueur;
    //attribut pour faire l'aggrégation
    private Joueur [] joueur=new Joueur[5];

    //constructeur par initialisation pour réaliser l'agrégation
    public Equipe(String nom, Joueur[] joueur, int nombreDeJoueur){
        this.nom=nom;
        this.nombreDeJoueur=nombreDeJoueur;
        //chaque joueur de l'équipe va prendre les même caractéristique que les joueurs passés en paramètre
        //par conséquent, le jooueur a la destruction de l'équipe ne sera pas détruit.
        for(int i=0;i<nombreDeJoueur;i++){
            this.joueur[i]=joueur[i];
        }
    }

    //liste des getters
    public String getNom(){
        return nom;
    }

    public int getNbJoueur(){
        return nombreDeJoueur;
    }

    public Joueur[] getJoueur(){
        return joueur;
    }

    //nous ne ferons qu'un setter pour aller a l'essentiel
    public void setNom(String nom){
        this.nom=nom;
    }

    //méthode permettant d'afficher la liste des joueurs
    public void afficherListeJoueur(){
        for(int i=0;i<nombreDeJoueur;i++){
            System.out.println("Joueur "+(i+1)+" : "+joueur[i].getNom()+" "+joueur[i].getPrenom()+" age : "+joueur[i].getAge()+" numéro : "+joueur[i].getNumero()+" poste : "+joueur[i].getPoste());
        }
    }

    //destructeur
    public void finalize(){
        System.out.println("L'équipe est dissoute");
    }
}
```

Fichier main.java

```java
import packAgre.Joueur;
import packAgre.Equipe;

public class main {
    public static void main(String[] args){
        //déclaration est initialisation des joueurs
        Joueur joueur1= new Joueur("Bryant","Kobe",24,41,"Arrière");
        Joueur joueur2= new Joueur("Lebron","James",6,37,"Allier");
        Joueur joueur3= new Joueur("Adbul-Jabbar","Kareem",33,75,"pivot");
        Joueur joueur4= new Joueur("Davis","Anthony",3,29,"Allier fort");
        Joueur joueur5= new Joueur("Magic","Jonhson",32,62,"Meneur");
        //initialisation du nombre de joueur
        int nombreDeJoueur=5;
        //liste des joueurs a mettre dans l'équipe
        Joueur[] joueur= {joueur1,joueur2,joueur3,joueur4,joueur5};
        //initialisation de l'équipe
        Equipe equipe=new Equipe("Legendary Lakers",joueur,nombreDeJoueur);
        //affichage des joueurs
        equipe.afficherListeJoueur();
    }
}
```

Commande à entrer dans le terminal

```powershell
#si le code a été téléchargé aller dans le dossier java du répertoire agregation
java main.java
#sinon mettre tout le ficheir dans le même répertoire et dans le terminal aller dans le répertoire (commande cd)
javac Joueur.java
javac -d . Joueur.java
javac Equipe.java
javac -d . Equipe.java
java main.java
```

CODE C++ :

Fichier Joueur.h

```cpp
#include <iostream>

using namespace std;

class Joueur
{
private:
    string nom;
    string prenom;
    string poste;
    int age;
    int numero;

public:
    //constructeur par initialisation
    Joueur(string nom, string prenom, int numero, int age, string poste);
    //destructeur
    ~Joueur();
    string getNom() const;
    string getPrenom() const;
    string getPoste() const;
    int getNumero() const;
    int getAge() const;
    //pas de setters pour l'exemple car non utile pour notre exemple
};
```

Fichier Joueur.cpp

```cpp
#include "Joueur.h"

//constructeur par initialisation
Joueur::Joueur(string nom, string prenom, int numero, int age, string poste):nom(nom),prenom(prenom),numero(numero),age(age),poste(poste){};
//destructeur
Joueur::~Joueur(){
    cout<<"Desctructeur joueur"<<endl;
}

//getters
string Joueur::getPrenom() const{
    return prenom;
}

string Joueur::getNom() const{
    return nom;
}

int Joueur::getNumero() const{
    return numero;
}

int Joueur::getAge() const{
    return age;
}

string Joueur::getPoste() const{
    return poste;
}
```

Fichier Equipe.h

```cpp
#include "Joueur.h"

class Equipe
{
private:
    string nom;
    int nombreDeJoueur;
    Joueur* joueur;

public:
    //constructeur
    Equipe(string nom,int nombreDeJoueur,Joueur* joueur);
    //destructeur
    ~Equipe();

    //liste des getters
    string getNom() const;
    int getNombreDeJoueur() const;
    Joueur* getJoueur() const;

    //Nous ne ferons pas de setters pour aller a l'essentiel directement

    //méthode permettant d'afficher la liste des joueurs et leur caractéristique
    void afficherListeJoueur();
};
```

Fichier Equipe.cpp

```cpp
#include "Equipe.h"

Equipe::Equipe(string nom, int nombreDeJoueur, Joueur* joueur):nom(nom),nombreDeJoueur(nombreDeJoueur),joueur(joueur){};
Equipe::~Equipe(){
    cout<<"Destructeur equipe"<<endl;
}

string Equipe::getNom() const{
    return nom;
}

int Equipe::getNombreDeJoueur() const{
    return nombreDeJoueur;
}

Joueur* Equipe::getJoueur() const{
    return joueur;
}

void Equipe::afficherListeJoueur(){
    for(int i=0;i<nombreDeJoueur;i++){
            cout<<"Joueur "<<i+1<<" "<<joueur[i].getNom()<<" "<<joueur[i].getPrenom()<<" age : "<<joueur[i].getAge()<<" numéro : "<<joueur[i].getNumero()<<" poste : "<<joueur[i].getPoste()<<endl;
    }
}
```

Fichier main.cpp

```cpp
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
```

Commande à entrer dans le terminal depuis le répertoire agregation/cpp

```bash
#si code télécharger depuis github
./program
#sinon
g++ main.cpp -o main.o -c
g++ Equipe.cpp -o Equipe.o -c
g++ Joueur.cpp -o Joueur.o -c
g++ -o program main.o Equipe.o Joueur.o
./program
```

### Composition

La composition est une relation de type appartenance. La vie de l’objet composant est liée à celle de l’objet composé. C’est-à-dire que si la classe X fait partie (compose) de la classe Y alors si Y est détruit X l’est aussi.

Prenons en exemple un des principes du célèbre jeu OGAME.
Une lune est composé de batiment. Lune étant la classe Y et batiment la classe X.
Si la lune est détruite alors les batiments le sont aussi. (question de logique !)

Il faut donc retenir que la composition et l’agrégation sont différents.

### Exemple de composition en JAVA et C++

Fichier Batiment.java

```java
package packCompo;

public class Batiment {
    //attribut
    private String nom;
    private int production;

    //constructeur par initialisation
    public Batiment(String nom, int production){
        this.nom=nom;
        this.production=production;
    }

    //destructeur
    public void finalize(){
        System.out.println("Destructeur batiment");
    }

    //getters
    public String getNom(){
        return nom;
    }

    public int getProduction(){
        return production;
    }

    //pas besoin de setters pour notre exemple
}
```

Fichier Lune.java

```java
package packCompo;

public class Lune {
    private String nom;
    private int taille;
    private Batiment batiment;

    //Constructeur par initialisation
    public Lune(String nom, int taille, String nomBat, int production){
        this.nom=nom;
        this.taille=taille;
        //composition comme ceci
        this.batiment=new Batiment(nomBat, production);
    }

    //destructeur
    public void finalize(){
        System.out.println("Lune détruite");
    }

    //méthode pour afficher le batiment
    public void affichage(){
        System.out.println("Batiment de la lune : "+batiment.getNom()+" production : "+batiment.getProduction());
    }

    //pas besoin de setter et de getter pour notre exemple
}
```

Fichier main.java

```java
import packCompo.Lune;
import packCompo.Batiment;

public class main {
    public static void main(String[] args){
        //déclaration et instanciation de la class lune avec la mise en place de la composition
        //dans le constructeur !
        Lune lune=new Lune("Ganymede",918000,"Mine de métal",9000);
        lune.affichage();
    }
}
```

Commande à entrer dans le terminal depuis le répertoire du fichier main.java

```bash
#si le code a été téléchargé sur mon github
java main.java
#sinon
javac Batiment.java
javac -d . Batiment.java
javac Lune.java
javac -d . Lune.java
java main.java
```

CODE C++ :

Fichier Batiment.h

```cpp
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
```

Fichier Batiment.cpp

```cpp
#include "Batiment.h"

//constructeur par initialisation
Batiment::Batiment(string nom, int production):nom(nom),production(production){};
//destructeur
Batiment::~Batiment(){
    cout<<"destruction du batiment"<<endl;
}

string Batiment::getNom() const{
    return nom;
}

int Batiment::getProduction() const{
    return production;
}
```

Fichier Lune.h

```cpp
#include "Batiment.h"

class Lune
{
private:
    string nom;
    int taille;
    Batiment batiment;
public:
    //constructeur par initialisation
    Lune(string nom, int taille, string nomBat, int production);
    //destructeur
    ~Lune();
    //pas de getter ni de setter (pas besoin pour l'exemple)
    void afficher(){
        cout<<"taille de la lune "<<nom<<" : "<<taille<<"km"<<endl;
        cout<<"Batiment sur "<<nom<<" : "<<batiment.getNom()<<" production par h : "<<batiment.getProduction()<<endl;
    }
};
```

Fichier Lune.cpp

```cpp
#include "Lune.h"

//composition dans le constructeur directement ! (déclaration et instanciation dans le constructeur)
Lune::Lune(string nom, int taille, string nomBat, int production):nom(nom),taille(taille),batiment(nomBat,production){};
//destructeur
Lune::~Lune(){cout<<"destruction de la lune"<<endl;}
```

Fichier main.cpp

```cpp
#include "Lune.h"

int main(){
    //déclaration, instanciation de l'objet lune avec la composition
    //du batiment directement dans le constructeur de la lune
    Lune lune("Ganymede",918000,"mine de métal",9000);
    lune.afficher();

    return 0;
}
```

Commande à entrer dans le terminal depuis le repertoire ou se trouve le fichier main.cpp

```cpp
#si code télécharger depuis github
./prog
#sinon
g++ main.cpp -o main.o -c
g++ Lune.cpp -o Lune.o -c
g++ Batiment.cpp -o Batiment.o -c
g++ -o program main.o Lune.o Batiment.o
./prog
```

---

Nous allons nous attaquer à l’un des principes les plus important de la programmation orientée objet.
Nous allons évoquer la notions d’**héritage** et de **polymorphisme** !

# Héritage

## Qu’est ce que l’héritage ?

L’héritage est un type de lien qui permet de construire des relations plus complexes que celle que nous avons étudié précédemment.
Son principe repose qu’au moment où des objets de types différents possèdent des caractéristiques en communs le traitement de ces caractéristiques peuvent être appliqué de la même façon sans ternir compte du types des objets concernés.

### Exemple :

Considérons un livre et un manga ou bande dessinée (selon vos préférence).
Un livre et un manga possèdent de nombreux points communs. En outre le manga possède toute les caractéristiques d’un livre mais il possède seulement en plus un dessinteur.
Est-il nécessaire de devoir redéfinir l’objet manga entièrement sans prendre en compte l’objet livre ?
Non, on utilisera dans ce contexte le principe de l’héritage.
Dans ce cas pour réutiliser les caractéristiques communes entre ces deux objets, nous devons définir la classe Mère dite aussi classe de base puis nous déterminerons la ou les classes filles dite classe par dérivation.
On dit alors que la classe Manga est fille de la Classe Livre.

L’héritage peut être multiple, mais dans un premier temps nous allons aborder l’héritage simple.

## Héritage simple

La mise en place d’un héritage simple ce faire comme ceci :

- java

```java
//fichier Livre.java (Classe Mère, de base)
public class Livre{
//...contenue
};

//fichier Manga.java (Classe Fille, dérivé)
public class Manga extend Livre{
//...contenue
};
```

- C++

```cpp
//Fichier Livre.h (Classe Mère, de base)
class Livre {
//...contenue
};

//Fichier Manga.h (Classe Fill, dérivé)
class Manga: public Livre {
//...contenue
};
```

Cela implique que tout les éléments de la classe Livre intègre la classe Manga.
Toutes les méthodes de Livre, c’est-à-dire les constructeurs, les destructeurs et autres intégre la classe Manga.
De plus tout les attributs non privés de la classe Livre intègre aussi la classe Manga.

La notion de porter prend de l’importance dans l’héritage nottamment le concept de protected (protection).
En outre, un attribut privé n’appartient qu’à la classe où elle est définit, hors si l’attribut est protected la classe fille à accès à cette attribut.
La porter est aussi prise en compte pour les méthodes !

Un constructeur d’une classe fille doit être défini de manière à prendre en compte les attributs héritées et ces propres attributs.

### Constructeur d’un classe fille (dérivée)

Nous allons donc illustrer les différents constructeur en JAVA et C++

1. Constructeur par défaut
- Java

```java
//fichier de la class Livre.java
class Livre{
	//...contenue
	//Constructeur de la classe Mere Livre
	public Livre(){
		titre="defaut"
		auteur="defaut"
		//... avec tout les attributs de la classe
	}
}

//fichier de la class Manga.java
class Manga extend Livre{
	/...
	//constructeur de la classe Fille
	public Manga(){
		//appel du constructeur par defaut de la class Mere Livre
		super();
		//puis on remplit les attributs de la classe fille
		dessinateur="defaut";
	}
}
```

- C++

```cpp
//Livre.h
class Livre{
	protected:
		std::string titre;
		std::string auteur;
	public:
		Livre();
}
//Livre.cpp
Livre::Livre(){
	titre="defaut";
	auteur="defaut";
}

//Manga.h
class Manga : public Livre{
	private:
		std::string dessinateur;
	public:
		Manga();
}

//Manga.cpp
Manga::Manga():Livre(){
	dessinateur="defaut";
}
```

1. Constructeur par initialisation
- Java

```java
//fichier de la class Livre.java
class Livre{
	//attribut
	protected String auteur;
	protected String titre;
	//Constructeur de la classe Mere Livre
	public Livre(String titre, String auteur){
		this.titre=titre;
		this.auteur=auteur;
	}
}

//fichier de la class Manga.java
class Manga extend Livre{
	private String dessinateur;
	//constructeur de la classe Fille
	public Manga(String titre, String auteur, String dessinateur){
		//appel du constructeur par defaut de la class Mere Livre
		super(titre, auteur);
		//puis on remplit les attributs de la classe fille
		this.dessinateur=dessinateur;
	}
}
```

- C++

```cpp
//Livre.h
class Livre{
	protected:
		std::string titre;
		std::string auteur;
	public:
		Livre(std::string titre, std::auteur);
}
//Livre.cpp
Livre::Livre(std::string titre, std::string auteur):titre(titre),auteur(auteur){}

//Manga.h
class Manga : public Livre{
	private:
		std::string dessinateur;
	public:
		Manga(std::string titre, std::string auteur, std::string dessinateur);
}

//Manga.cpp
Manga::Manga(std::string titre, std::string auteur, std::string dessinateur):Livre(titre,auteur), dessinateur(dessinateur){}
```

1. Constructeur par copie
- Java

```java
//fichier de la class Livre.java
class Livre{
	//...contenue
	//Constructeur de la classe Mere Livre
	public Livre(Livre l){
		titre=l.titre;
		auteur=l.auteur
		//... avec tout les attributs de la classe
	}
}

//fichier de la class Manga.java
class Manga extend Livre{
	/...
	//constructeur de la classe Fille
	public Manga(Manga m){
		//appel du constructeur par defaut de la class Mere Livre
		super(m);
		//puis on remplit les attributs de la classe fille
		dessinateur=m.dessinateur;
	}
}
```

- C++

```cpp
//Livre.h
class Livre{
	protected:
		std::string titre;
		std::string auteur;
	public:
		Livre(Livre const& livre);
}
//Livre.cpp
Livre::Livre(Livre const& livre):titre(livre.titre),auteur(livre.auteur){}

//Manga.h
class Manga : public Livre{
	private:
		std::string dessinateur;
	public:
		Manga(Manga const& manga);
}

//Manga.cpp
Manga::Manga(Manga const& manga):titre(manga.titre),auteur(manga.auteur),dessinateur(manga.dessinateur){};
```

Maintenant que nous allons nous attarder sur l’héritage des méthodes.
Comme nous l’avons vu l’héritage permet de réutiliser le code déjà écrit et d’ajouter de nouvelles fonctionnalités.
Mais on peut modifier le comportement d’une fonctionnalité déjà existant, nottamment des méthodes.
On appelle cette notion la redéfinition.

## Redéfinition

La redéfinition permet de modifier le comportement d’une méthode déja existante.

### Exemple:

Définissons les classes Animal, chien et chat.
Chien et Chat hérite de la classe Mère animal.
La classe animal possède la méthode cri dont le comportement est défini.
Hors un chien et un chat on un cri différent.
La redéfinition va nous permettre de changer le comportement de la méthode pour ces 2 classes.
*(attention la méthode soit avoir la même signature que la méthode parent !)*

Exemple en java :

fichier Animal.java

```java
public class Animal {
    protected String nom;
    protected int nombreDePattes;

    public Animal(){
        nom="defaut";
        nombreDePattes=0;
    }

    public Animal(String nom, int nombreDePattes){
        this.nom=nom;
        this.nombreDePattes=nombreDePattes;
    }

    public Animal(Animal animal){
        nom=animal.nom;
        nombreDePattes=animal.nombreDePattes;
    }

    public String getNom(){
        return nom;
    }

    public int getNombreDePattes(){
        return nombreDePattes;
    }

    public void setNom(String nom){
        this.nom=nom;
    }

    public void setNombreDePattes(int nombreDePattes){
        this.nombreDePattes=nombreDePattes;
    }

    //méthode que l'on va redéfinir
    public void crier(){
        System.out.println("Cri d'un animal");
    }
}
```

fichier Chat.java

```java
public class Chat extends Animal {
    public Chat(){
        super("Chat",4);
    }

    public Chat(String nom, int nombreDePattes){
        super(nom, nombreDePattes);
    }

    public Chat(Chat chat){
        super(chat);
    }

    //pas besoin de getter et de setter car deja défini dans la classe Mere Animal

    //redéfinition de la méthode crier
    public void crier(){
        System.out.println("Miaou Meow !!!");
    }
}
```

fichier Chien.java

```java
public class Chien extends Animal{
    public Chien(){
        super("Chien",4);
    }

    public Chien(String nom, int nombreDePattes){
        super(nom, nombreDePattes);
    }

    public Chien(Chien chien){
        super(chien);
    }

    //pas besoin de getter et de setter car deja défini dans la classe Mere Animal

    //redéfinition de la méthode crier
    public void crier(){
        System.out.println("Whouaf whouaf !!!");
    }
}
```

main.java

```java
public class main {
    public static void main(String[] args){
        Animal animal= new Animal();
        Chien chien= new Chien("Médor",4);
        Chat chat= new Chat("Miaouss",4);
        animal.crier();
        System.out.println("Nombre de pattes de l'animal par défaut : "+animal.getNombreDePattes());
        //teste de la redéfinition
        chien.crier();
        chat.crier();
        //teste des getters
        System.out.println("Prenom du chien : "+chien.getNom());
        System.out.println("Prenom du chat : "+chat.getNom());
    }
}
```

Commande à mettre dans le terminal

```bash
#si le code a été téléchargé sur mon github
java main.java
#sinon
javac Animal.java
javac Chien.java
javac Chat.java
java main.java
```

CODE C++ :

Animal.h

```cpp
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal{
private:
    /*Méthode ou attribut dont la classe fille n'a pas accès*/
protected:
    /*Seule les filles ont directement accès aux méthodes ou attributs*/
    string nom;
    int nombreDePatte;
public:
    Animal();
    Animal(string nom, int nombreDePatte);
    Animal(Animal const& animal);
    string getNom() const;
    int getNombreDePatte() const;
    void setNom(string nom);
    void setNbPatte(int nombreDePatte);
    virtual void crier() const;
    ~Animal();
};

#endif
```

Animal.cpp

```cpp
#include "Animal.h"

Animal::Animal():nom("defaut"),nombreDePatte(0){};
Animal::Animal(string nom, int nombreDePatte):nom(nom),nombreDePatte(nombreDePatte){};
Animal::Animal(Animal const& animal):nom(animal.nom),nombreDePatte(animal.nombreDePatte){};

string Animal::getNom() const{return nom;}
int Animal::getNombreDePatte() const{return nombreDePatte;}

void Animal::setNom(string nom){this->nom=nom;}
void Animal::setNbPatte(int nombreDePatte){this->nombreDePatte=nombreDePatte;}

void Animal::crier() const{
    cout<<"Reeuh"<<endl;
}

Animal::~Animal(){};
```

Fichier Chien.h

```cpp
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
```

Fichier Chien.cpp

```cpp
#include "Chien.h"

Chien::Chien():Animal(){};
Chien::Chien(string nom, int nombreDePatte):Animal(nom,nombreDePatte){};
Chien::Chien(Chien const& chien):Animal(chien){};

//redéfinition de la méthode crier

inline void Chien::crier() const{
    cout<<"Whouaf whouaf !!!"<<endl;
}

Chien::~Chien(){};
```

Fichier Chat.h

```cpp
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
```

Chat.cpp

```cpp
#include "Chat.h"

Chat::Chat():Animal(){};
Chat::Chat(string nom, int nombreDePatte):Animal(nom,nombreDePatte){};
Chat::Chat(Chat const& chat):Animal(chat){};

//redéfinition de la méthode crier
inline void Chat::crier() const{
    cout<<"Miaou Meow !!!"<<endl;
}

Chat::~Chat(){};
```

Main.cpp

```cpp
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
```

Commande à entrer dans le terminal

```bash
#si code télécharger depuis github
./prog
#sinon
g++ main.cpp -o main.o -c
g++ Chat.cpp -o chat.o -c
g++ Chien.cpp -o chien.o -c
g++ Animal.cpp -o animal.o -c
g++ -o program main.o animal.o chat.o chien.o
./prog
```

<aside>
⚠️ En C++, il faut faire appel à l’annotation virtual, en effet si la méthode que l’on veut redéfinir n’est pas virtuelle alors le type de l’objet pointé sera celle de la classe Mère et non celle de la classe fille.
Il est donc impératif de faire déclarer la méthode virtuelle qui dynamisera le type de l’objet !
Je ferai un cours sur la virtualité à part.

</aside>

---

TO-DO LIST

- [x]  Expliquer ce qu’est la POO
- [x]  Qu’est ce qu’un objet
- [x]  Classe
- [x]  Atribut
- [x]  Méthode
- [x]  Constructeur
- [x]  Destructeur
- [x]  Setters
- [x]  Getters
- [x]  Expliquer la notion d’héritage
- [x]  Héritage simple
- [ ]  Polymorphisme
- [ ]  Héritage multiple
- [ ]  Interface
- [ ]  Classe abstraite
- [x]  Redéfinition
- [ ]  Surcharge
- [x]  Aggrégation
- [x]  Composition
- [x]  Porter ( public, private, protected )