/* L’héritage permet à une classe de réutiliser les caractéristiques d’une autre.
1. Quelle est la différence entre une classe mère et une classe fille?
2. Dans un centre de formation, identifiez une classe mère et deux classes filles.
3. Quels attributs et méthodes seraient communs à toutes les classes?
4. Quels attributs et méthodes seraient spécifiques à chaque classe fille?
5. Pourquoi l’héritage est-il utile pour éviter la redondance dans un programme?
6. Dans quels cas l’héritage peut-il être mal utilisé ou causer des problèmes de conception? */

#include <iostream>
using namespace std;

string Mix_Word(string& word1, string& word2) {
    int taille1, taille2;
    taille1 = word1.length();
    taille2 = word2.length();
    string new_word;
    int i, j;
    for ( i =j = 0; i < taille1 || j < taille2 ; i++, j++) {
        if (i < taille1)
            new_word += word1[i];
        if (j < taille2)
            new_word += word2[j];
    }
    return new_word;
}