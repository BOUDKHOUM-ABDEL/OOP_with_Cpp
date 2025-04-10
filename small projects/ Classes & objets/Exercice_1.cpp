/* Exercice 1 :
    Définissez une classe Person avec les attributs suivants :
     — nom (chaîne de caractères) → private
     — âge (entier) → private
    Ajoutez :
      — Unconstructeur public pour initialiser les attributs.
      — Une méthode introduire() → public qui affiche :
       "Bonjour, je m'appelle nom et j'ai âge ans."
     Créez un objet de cette classe et appelez la méthode.*/

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string nom;
    int age;
public:
    // Constructeur
    Person(string n, int a) {
        nom = n;
        age = a;
    }
 // Méthode pour s'introduire
    void introduire() {
        cout << "Bonjour, je m'appelle " << nom << " et j'ai " << age << " ans." << endl;
    }
};

int main() {
    // Création d'un objet Person
    Person personne("Alice", 25);
     // Appel de la méthode introduire
    personne.introduire();

    return 0;
}
