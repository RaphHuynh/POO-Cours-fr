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