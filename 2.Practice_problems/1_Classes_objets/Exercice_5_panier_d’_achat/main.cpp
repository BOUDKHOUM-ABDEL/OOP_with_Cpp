
#include <iostream>
#include "Article.h"
#include "Panier.h"

int main()
{
	Panier Panier1;
	Article A1("ordinateur", 1200, 20);
	Article A2("Phone", 600, 30);
	Article A3("Ecran", 300, 15);
	Article A4("USB", 10, 50);

	Panier1.AjouterArticle(A1);
	Panier1.AjouterArticle(A2);
	Panier1.AjouterArticle(A3);
	Panier1.AjouterArticle(A4);

	Panier1.CalculerTotal();

	Panier1.AfficherPanier();
}

