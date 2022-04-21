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