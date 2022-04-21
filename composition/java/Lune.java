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