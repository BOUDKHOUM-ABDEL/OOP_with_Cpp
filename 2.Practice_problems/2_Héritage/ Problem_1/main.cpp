#include <isostream>
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
int main() {

	return 0;
}
