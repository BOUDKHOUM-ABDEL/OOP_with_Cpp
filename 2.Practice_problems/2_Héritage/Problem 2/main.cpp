#include <iostream>
#include "clsAppareil.h"
using namespace std;
int main() {

	 clsLumiere l(1, "actif", 75);
	 clsThermostat t(2, "en veille", 22.5);
	 clsCamera c(3, "hors ligne", "1080p");
	 l.afficher();
	 t.afficher();
	 c.afficher();
	return 0;
}

