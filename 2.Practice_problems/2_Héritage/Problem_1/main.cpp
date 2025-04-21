#include <iostream>
using namespace std;
class clsAnimal {

public:
    void son() {
        cout << "Son d’un animal inconnu." << endl;
    }
};

class clschien : public clsAnimal {
public:
    void son() {
        cout << "Woof" << endl;
    }
};

 class clschat : public clsAnimal {
    public:
        void son() {
            cout << "Meow" << endl;
        }


};
int main() {
    clschien monchien;
    clschat monchat;
    monchien.son(); // Affiche : Woof
    monchat.son();  // Affiche : Meow

	return 0;
}
