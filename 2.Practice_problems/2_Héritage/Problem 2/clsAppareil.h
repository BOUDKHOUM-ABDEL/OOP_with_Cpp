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
		cout << "Appareil : " << _id << " : " << _statut ;
	}
};

class clsLumiere : public clsAppareil{
private: 
	int _intensite;
public:
	clsLumiere(int id, string statut, int intensite) :clsAppareil(_id, _statut) {
		_intensite = intensite;
	}
	void afficher() {
		afficherStatut();
		cout << "Intensité lumineuse : " << _intensite << "%" << endl;
    }

};

class clsThermostat : protected clsAppareil {
private:
	float _temperature;
public:
	clsThermostat (int id, string statut, float temperature) :clsAppareil(_id, _statut) {
		_temperature = temperature;
	}
	void afficher() {
		afficherStatut();
		cout << "Température actuelle : " << _temperature << "°C" << endl;
	}
	}
};

class clsCamera : private clsAppareil {
private:
	string  _resolution;
public:
	clsCamera(int id, string statut, int resolution) :clsAppareil(_id, _statut) {
		_resolution = resolution;
	}
	void afficher() {
		afficherStatut();
		cout << "Résolution de la caméra : " << _resolution << endl;
	}
};
