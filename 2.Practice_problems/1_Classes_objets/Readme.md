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




