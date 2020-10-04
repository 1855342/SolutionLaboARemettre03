/*But : Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. Les
représentants reçoivent 250 $ par semaine plus 7.5 % de leurs ventes brutes par semaine.Par exemple, un
représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.*/
//Auteur : Charles St-Vincent
//Date : 03/10/20

#include<iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "");


	// Les informations fournies par l'utilisateur
	float ventebrute;


	// Le résultat affiché par le programme


	while (ventebrute != -1) // tant que l'utilisateur ne tape pas -1, le programme n'arretera pas 
	{
		
		
		float salaire = (7.5 / 100) * ventebrute + 250;
		cout << "Votre salaire est de : " << salaire << "$" << endl;

		cout << "Veuillez entrer les ventes brutes hebdomadaires : ";
		cin >> ventebrute;

	}









	return 0;

}


