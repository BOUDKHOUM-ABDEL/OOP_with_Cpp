 **Exercice 1 :**

     *Définissez une classe Person avec les attributs suivants :*
   
        — nom (chaîne de caractères) → private
        — âge (entier) → private
     
      *Ajoutez :*
        — Unconstructeur public pour initialiser les attributs.
        — Une méthode introduire() → public qui affiche :
         "Bonjour, je m'appelle nom et j'ai âge ans."
       
      *Créez un objet de cette classe et appelez la méthode.*

 Exercice 2 :
 Créez une classe CompteEtudiant qui possède :
 — Unattribut privé notes (un vector de float) pour stocker les notes.
 Ajoutez :
 — Une méthode obtenirMoyenne() qui retourne la moyenne actuelle des notes. Si le
 tableau est vide, elle retourne 0.
 — Uneméthode ajouterNote(float note) qui ajoute une note au tableau si elle est com
prise entre 0 et 20, et affiche la nouvelle moyenne après l’ajout. Si la note est invalide,
 affiche un message d’erreur.
 — Une méthode trouverNote(float note) qui retourne l’index de la note si elle existe,
 sinon retourne-1.
 — Uneméthode supprimerNote(float note) qui utilise trouverNote() pour retirer une
 note à l’aide de la fonction erase() et ajuste la moyenne. Si la note n’existe pas, affiche
 un message d’erreur.
 Testez la fonctionnalité en créant un objet CompteEtudiant, en ajoutant des notes valides,
 puis en supprimant certaines d’entre elles, tout en affichant la moyenne après chaque opération.
