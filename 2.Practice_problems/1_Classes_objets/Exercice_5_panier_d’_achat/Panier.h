#pragma once

#include <iostream>
#include <vector>
#include "Article.h"


class Panier
{
private:


	vector <Article> Articles;

public:

	void AjouterArticle(Article& A) {
		Articles.push_back(A);
	}

	void AfficherPanier() {

		cout << "\n--- Contenu du Panier ---" << endl;

		for (const auto& article : Articles) {
			article.AfficherInfo();
		}
	}

	float CalculerTotal() {
		float totales = 0;
		for (const auto& article : Articles) {
			totales = +article.TotalPrix();
		}
		return totales;
	}

};

