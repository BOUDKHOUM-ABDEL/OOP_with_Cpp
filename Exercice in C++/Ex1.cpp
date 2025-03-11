 /* Écrivez un programme qui affiche la table de multiplication de n jusqu’à limite.
 1. n est une valeur prédéfinie dans le programme.
 2. limite est introduit par l’utilisateur via le clavier. */
#include <iostream>

using namespace std;


int main()
{
    int n =7, limite;
    
    cin >> n;
    cout << "\n Saisie de la limite :   " ;
    cin >> limite;

    cout << "___________la table de multiplication du " << n << "jusqu'a " << limite << "est___________" << endl;
    for (int i = 0; i <= limite; i++) {
        cout << n << "*" << i << "=" << n * i << endl;
    }
   
}


