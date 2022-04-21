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
