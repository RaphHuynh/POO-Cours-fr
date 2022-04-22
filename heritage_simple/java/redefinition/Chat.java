public class Chat extends Animal {
    public Chat(){
        super("Chat",4);
    }

    public Chat(String nom, int nombreDePattes){
        super(nom, nombreDePattes);
    }

    public Chat(Chat chat){
        super(chat);
    }

    //pas besoin de getter et de setter car deja défini dans la classe Mere Animal

    //redéfinition de la méthode crier
    public void crier(){
        System.out.println("Miaou Meow !!!");
    }
}