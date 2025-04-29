#pragma once
#include <iostream>

using namespace std;

class Article
{
private:

	string _nom;
	float _prix;
	int _Quantite;

public:

	Article(string nom, float prix, int quantite) {
		_nom = nom;
		_prix = prix;
		_Quantite = quantite;
	}

	void AfficherInfo() const {
		cout << "Nom : " << _nom
			<< ", Prix : " << _prix << "$"
			<< ", Quantite : " << _Quantite << endl;


	}

	float TotalPrix() const {
		return _prix * _Quantite;
	}

};

