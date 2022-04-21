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