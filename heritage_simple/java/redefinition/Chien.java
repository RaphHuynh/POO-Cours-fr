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