/*  Écrivez une fonction qui prend deux chaînes de caractères word1 et word2, puis retourne une
 nouvelle chaîne où les lettres sont fusionnées en alternance, en commençant par word1. Si une
 chaîne est plus longue que l’autre, ajoutez les lettres restantes à la fin.
 Exemple :
 — Entrée : word1 = "abc", word2 = "pqr"
 — Sortie : "apbqcr" */

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
int main()
{
    string word1, word2;

    cout << "Entrez la première chaîne : ";
    cin >> word1;
    cout << "Entrez la deuxième chaîne : ";
    cin >> word2;

    cout << Mix_Word(word1, word2);
    
return 0 ;
}
