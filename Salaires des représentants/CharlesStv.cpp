/*But : Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. Les
repr�sentants re�oivent 250 $ par semaine plus 7.5 % de leurs ventes brutes par semaine.Par exemple, un
repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
affiche son salaire.Entrez - 1 � la valeur des ventes pour quitter le programme.*/
//Auteur : Charles St-Vincent
//Date : 03/10/20

#include<iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "");


	// Les informations fournies par l'utilisateur
	float ventebrute;


	// Le r�sultat affich� par le programme


	while (ventebrute != -1) // tant que l'utilisateur ne tape pas -1, le programme n'arretera pas 
	{
		
		
		float salaire = (7.5 / 100) * ventebrute + 250;
		cout << "Votre salaire est de : " << salaire << "$" << endl;

		cout << "Veuillez entrer les ventes brutes hebdomadaires : ";
		cin >> ventebrute;

	}









	return 0;

}


