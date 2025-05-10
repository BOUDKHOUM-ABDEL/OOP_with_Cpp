#pragma once
#include <iostream>
using namespace std;
class clsAppareil {
private: 
	int _id;
	string _statut;
public: 
	clsAppareil(int id, string statut) {
		_id = id;
		_statut = statut;
	}

	void afficherStatut() {
		cout << "Appareil : "<< _id << " : " << _statut
	}
};
//Modélisez un système domotique avec héritage et liste d’initialisation.Créez une classe de
//base Appareil avec deux attributs protégés : id(entier) et statut(chaîne de caractères).
//Le constructeur de Appareil utilise une liste d’initialisation pour définir ces attributs.La
//méthode afficherStatut() affiche le message suivant : Appareil #ID : STATUT.