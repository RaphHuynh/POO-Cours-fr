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