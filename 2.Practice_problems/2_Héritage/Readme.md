 **Problem  1 :**

      Créez une classe de base Animal avec une méthode son(). Ensuite, définissez deux sous
      classes :

          — Chien, où la méthode son() affiche ”Woof”.
          — Chat, où la méthode son() affiche ”Meow”.

      Instanciez les deux classes et appelez leur méthode son().


 **Problem  2 :**

    Modélisez un système domotique avec héritage et liste d’initialisation. Créez une classe de
    base Appareil avec deux attributs protégés : id (entier) et statut (chaîne de caractères).
    Le constructeur de Appareil utilise une liste d’initialisation pour définir ces attributs. La
    méthode afficherStatut() affiche le message suivant : Appareil #ID : STATUT.
    Le statut peut prendre l’une des valeurs suivantes : "actif", "en veille" ou "hors ligne".
    Créez ensuite trois classes dérivées avec les héritages suivants :
       — Lumiere hérite en public, ajoute intensite, et affiche un message personnalisé.
       — Thermostat hérite en protected, ajoute temperature, et affiche un message personnalisé.
       — Camera hérite en private, ajoute resolution, et affiche un message personnalisé.

    Chaque classe utilise une liste d’initialisation pour définir les attributs hérités et spécifiques.
    Dans leur méthode afficher(), elles appellent afficherStatut() puis affichent un message
    court décrivant leur état propre.

  **Problem  3 :**

 Dans un système de gestion de transport, on modélise une classe Vehicule. Deux types dérivés
 sont définis :
 — Voiture avec une méthode ajouterBagage(int kg) qui vérifie si le poids n’excède pas
 500 kg, sinon affiche ”Trop lourd”.
 — Moto avec une méthode activerModeSport(bool actif) qui affiche un message si le
 mode est activé .
 Stocker des objets Voiture et Moto dans un vecteur de Vehicule*, puis utiliser dynamic_cast
 pour identifier leur type réel et appeler la méthode spécifique, en vérifiant toujours le cast.