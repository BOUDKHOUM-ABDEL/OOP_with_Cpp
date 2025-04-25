**EXERCICE 1:**
      
     Écrivez un programme qui affiche la table de multiplication de n jusqu’à limite.
        1. n est une valeur prédéfinie dans le programme.
        2. limite est introduit par l’utilisateur via le clavier. 

**EXERCICE 2:**

     Écrivez une fonction générique contient_element utilisant un template qui vérifie si un
     tableau contient un élément donné.
        1. La fonction doit être définie avec un template.
        2. La fonction doit fonctionner avec n’importe quel type (int, float, double, string, 
        etc.).
        3. La fonction retourne true si l’élément est trouvé, sinon false.
        4. L’allocation dynamique de mémoire avec new et la libération de mémoire avec delete
        doivent être effectuées dans le main.

**EXERCICE 3:**

         Écrivez une fonction qui prend deux chaînes de caractères word1 et word2, puis retourne 
         une nouvelle chaîne où les lettres sont fusionnées en alternance, en commençant par 
         word1.
         Si une chaîne est plus longue que l’autre, ajoutez les lettres restantes à la fin.
         Exemple :
             — Entrée : word1 = "abc", word2 = "pqr"
             — Sortie : "apbqcr"

 Exercice 4 :


       Écrire un programme utilisant des fonctions template pour déterminer la valeur maximale.
           1. Définir une fonction template<typename T> T maxValeur(T a, T b) qui retourne la
 plus grande des deux valeurs.
 2. Définir une autre fonction
 template<typename T> T maxValeur(const std::vector<T>& v)
 qui retourne la plus grande valeur contenue dans un vecteur.
 3. On suppose que le vecteur contient toujours au moins un élément.
 4. Dans main(), tester :
 • la fonction avec deux entiers puis deux réels,
 • la fonction avec un vecteur d’entiers puis un vecteur de double.