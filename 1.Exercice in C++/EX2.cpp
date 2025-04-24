#include <iostream>
using namespace std;
int main() {
	int i;
	bool estPair;
	string type;

	for (i = 1; i <= 10; i++) {
		estPair = (i % 2 == 0);

		if (estPair) {
			type = "pair";
		}
		else {
			type = "impair";
		}
		cout << "L'entier " << i << " est " << type << "." << endl

	}
	return 0;
}