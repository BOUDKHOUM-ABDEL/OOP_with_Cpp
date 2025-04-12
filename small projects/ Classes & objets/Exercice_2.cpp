#include <iostream>
#include <string>
#include <vector>
using namespace std;

class clsEtution
{
private:
    vector <float>notes;


public:

    float obtenirMoyenne() {
        if (notes.empty()) return 0;

        float somme = 0;
        for (int note : notes) {
            somme += note;
        }
        return somme / notes.size();
    }

   
};

int main()
{
 
}
