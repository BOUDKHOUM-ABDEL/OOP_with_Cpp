/* Écrivez une fonction générique contient_element utilisant un template qui vérifie si un
 tableau contient un élément donné.
 1. La fonction doit être définie avec un template.
 2. La fonction doit fonctionner avec n’importe quel type (int, float, double, string, etc.).
 3. La fonction retourne true si l’élément est trouvé, sinon false.
 4. L’allocation dynamique de mémoire avec new et la libération de mémoire avec delete
 doivent être effectuées dans le main.*/
 #include <iostream>

using namespace std;

template <class T>
bool contient_element(T* tableau, int taille, T element) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == element) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int taille;
    int elementRecherche;


    cout << "Entrez la taille du tableau : ";
    cin >> taille;


    int* tableau = new int[taille];

    cout << "Entrez les elements du tableau : " << endl;
    for (int i = 0; i < taille; i++) {
        cin >> tableau[i];
    }

    cout << "Entrez l'element à rechercher : ";
    cin >> elementRecherche;

    if (contient_element(tableau, taille, elementRecherche)) {
        cout << "L'element " << elementRecherche << " est present dans le tableau." << endl;
    }
    else {
        cout << "L'element " << elementRecherche << " n'est pas present dans le tableau." << endl;
    }

    delete[] tableau;

    return 0;
 
}

