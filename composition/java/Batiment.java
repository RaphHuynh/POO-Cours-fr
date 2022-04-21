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