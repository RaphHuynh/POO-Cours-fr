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