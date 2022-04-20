package pack;

public class Livre{
    //attribut
    private String titre;
    private String auteur;
    private String editeur;
    private String resume;
    private double prix;
    private String isbn;
    private int nombre_de_page;

    //constructeur
    //par défaut
    public Livre(){
        titre="titre par defaut";
        auteur="auteur par defaut";
        editeur="éditeur par defaut";
        resume="resume par defaut";
        prix=0;
        isbn="0";
        nombre_de_page=0;
    }

    //par initialisation les valeurs que l'on va rajouter sont en paramètre du constructeur comme dans une fonction
    public Livre(String titre,String auteur,String editeur, String resume, double prix, String isbn, int nombre_de_page){
        //le this permet de dire que l'on vite l'attribut de l'objet de la classe afin de faire la distinction avec le paramètre du constructeur
        this.auteur=auteur;
        this.titre=titre;
        this.editeur=editeur;
        this.resume=resume;
        this.prix=prix;
        this.isbn=isbn;
        this.nombre_de_page=nombre_de_page;
    }

    //par copie, un objet livre deja instancié est passé en paramètre
    public Livre(Livre l){
        //l.titre permet d'appeler l'attribut du livre l passé en paramètre de la méthode
        titre=l.titre;
        auteur=l.auteur;
        editeur=l.editeur;
        resume=l.resume;
        prix=l.prix;
        isbn=l.isbn;
        nombre_de_page=l.nombre_de_page;
    }

    //getters
    public String getTitre(){
        return titre;
    }

    public String getAuteur(){
        return auteur;
    }

    public String getResume(){
        return resume;
    }

    public String getEditeur(){
        return editeur;
    }

    public double getPrix(){
        return prix;
    }

    public String getIsbn(){
        return isbn;
    }

    public int getNbPage(){
        return nombre_de_page;
    }

    //setters
    public void setTitre(String titre){
        this.titre=titre;
    }

    public void setAuteur(String auteur){
        this.auteur=auteur;
    }

    public void setEditeur(String editeur){
        this.editeur=editeur;
    }

    public void setResume(String resume){
        this.resume=resume;
    }

    public void setPrix(double prix){
        //Verifie si le prix entrer est supérieur à 0 (en effet un prix ne peut pas être négatif !)
        if(prix>=0){
            this.prix=prix;
        }
    }

    public void setIsbn(String isbn){
            this.isbn=isbn;
    }

    public void setNombrePage(int nombre_de_page){
        //Le nombre de page ne peut pas être négatif et égale à 0!
        if(nombre_de_page>0){
            this.nombre_de_page=nombre_de_page;
        }
    }

    //méthode
    //réduction du prix en pourcentage
    public void reduction(double reduction){
        if(reduction<1||reduction>99){
            System.out.println("La reduction doit être comprise en 0 et 100\n");
        }
        else{
            //réduction en pourcentage
            prix=prix*(1-reduction/100);
        }
    }

    //méthode qui retroune vrai ou faux si les livres sont les même ou non
    public boolean sontLesMemeLivres(Livre l){
        boolean verif=true;
        //Si l'un des éléments n'est pas identiques alors la variable verif prend la valeur false
        //On ne compare pas le prix car le prix varie entre les boutiques.
        if(titre!=l.titre||auteur!=l.auteur||editeur!=l.editeur||resume!=l.resume||isbn!=l.isbn||nombre_de_page!=l.nombre_de_page){
            verif=false;
        }
        //retourne la valeur de la variable verif
        return verif;
    }

    //destructeur
    /*En java le destructeur est une méthode spéciale qui sera appelé si elle est redéfinie dans la classe 
    lorsque l'objet sera nettoyé de la mémoire par le
    */
    public void finalize(){
        System.out.print("Le livre a été détruit");
    }
}