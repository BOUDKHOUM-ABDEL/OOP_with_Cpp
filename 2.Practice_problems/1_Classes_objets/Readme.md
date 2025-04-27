 **Exercice 1 :**

     *Définissez une classe Person avec les attributs suivants :*
   
        — nom (chaîne de caractères) → private
        — âge (entier) → private
     
      *Ajoutez :*
        — Unconstructeur public pour initialiser les attributs.
        — Une méthode introduire() → public qui affiche :
         "Bonjour, je m'appelle nom et j'ai âge ans."
       
      *Créez un objet de cette classe et appelez la méthode.*

  **Exercice 2 :**
  
      Créez une classe CompteEtudiant qui possède :
           — Unattribut privé notes (un vector de float) pour stocker les notes.
     
      Ajoutez :
         — Une méthode obtenirMoyenne() qui retourne la moyenne actuelle des notes. Si le
           tableau est vide, elle retourne 0.
           
         — Uneméthode ajouterNote(float note) qui ajoute une note au tableau si elle est com
           prise entre 0 et 20, et affiche la nouvelle moyenne après l’ajout. 
           Si la note est invalide, affiche un message d’erreur.
           
         — Une méthode trouverNote(float note) qui retourne l’index de la note si elle existe,
           sinon retourne-1.
           
         — Uneméthode supprimerNote(float note) qui utilise trouverNote() pour retirer une
           note à l’aide de la fonction erase() et ajuste la moyenne. 
           Si la note n’existe pas, affiche un message d’erreur.
           
      Testez la fonctionnalité en créant un objet CompteEtudiant, en ajoutant des notes 
      valides, puis en supprimant certaines d’entre elles, tout en affichant la moyenne 
      après chaque opération.

  
  **Exercice 3 :  Implémenter une calculatrice arithmétique simple en C++**

    Créer une calculatrice orientée objet en C++ permettant d’effectuer des opérations arithmétiques de base:
    (addition, soustraction, multiplication, division) tout en maintenant un total courant.

      consigns:
      
      Définir une classe appelée clcalculator contenant :
         — Un attribut public total de type int, initialisé à 0.
         — Les méthodes publiques suivantes :
         — void add(int val) : ajoute la valeur val au total et affiche le résultat.
         — void substract(int val) : soustrait val du total et affiche le résultat.
         — void divide(int val) : divise le total par val (affiche un message d’erreur si val vaut 0).
         — void Mutiply(int val) : multiplie le total par val et affiche le résultat.
         — void print_total() : affiche le total actuel.
         — void clear() : remet le total à 0.
         
      Dans la fonction main() :
           — Créer un objet de la classe clcalculator.
           — Appeler plusieurs méthodes pour démontrer le fonctionnement de la calculatrice.


**Exercice 4 : Implémenter une classe représentant une personne en C++**

     Créer une classe orientée objet en C++ permettant de représenter une personne avec ses informations personnelles 
     et de simuler l’envoi de messages (email et SMS).


    **Consignes :**

    Définir une classe appelée `clsPerson` contenant :

         — Des attributs privés :  
 
                • `_id` de type `int`  
                • `_nom` de type `string`  
                • `_phone` de type `string`  
                • `_email` de type `string`  

        — Un constructeur permettant d’initialiser tous les attributs.  
  
        — Les méthodes publiques suivantes :  
               • `string fullname()` : retourne le nom complet (nom + prénom)  
               • `void print()` : affiche les informations complètes de la personne  
               • `void Sendemail(string subject, string body)` : simule l’envoi d’un e-mail en affichant le sujet et le message  
               • `void Sendsms(string sms)` : simule l’envoi d’un SMS avec le contenu du message  

    **Dans la fonction main() :**

        — Créer deux objets de la classe `clsPerson`.  
        — Afficher leurs informations personnelles à l’aide de la méthode `print()`.  
        — Envoyer un email et un SMS à la première personne.  
        — Envoyer un SMS à la deuxième personne. 


   **Exercice 5 : Implémenter une classe représentant une panier d’achat en C++**

     Simulez un système de panier d’achat en créant une classe Panier qui permet dajouter des
     articles, de calculer le total et dafficher les articles dans le panier. Chaque article doit être
     représenté par une classe Article contenant :

        — nom: le nom de l’article (chaîne de caractères).
        — prix : le prix unitaire de l’article (float).
        — quantité : la quantité de l’article (int).

    Ajoutez les méthodes suivantes :
        — totalPrix() dans la classe Article → Retourne le prix total en fonction de la quantité.
        — afficherInfo() dans la classe Article → Affiche les informations de l’article (nom, quantité et prix).
        — ajouterArticle() dans la classe Panier → Ajoute un article au panier.
        — afficherPanier() dans la classe Panier → Affiche le contenu du panier en utilisant la méthode afficherInfo() de la classe Article.
        — calculerTotal() dans la classe Panier → Calcule et retourne le total du panier.
