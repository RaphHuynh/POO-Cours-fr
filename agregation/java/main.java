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