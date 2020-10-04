/*But : Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
L’utilisateur a un maximum de 5 chances. Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
nombre.
Auteur : Charles St-Vincent	
Date : 03/10/20

*/

#include <time.h>
#include <iostream>
using namespace std;
int main()
{


    int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
    int random; // Le nombre random
    srand(time(NULL)); // Initialise random
    iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

    //L'utillisateur rentrera le nombre qui essaie de trouver le nombre

    int nbutili;
    int nbdefois = 1;
    

    //L'Utilisateur entre son chiffre pour la première fois 
    cout << "Entrer un chiffre entre 0 et 100 : "; 
    cin >> nbutili;

    //Si le chiffre n'Est pas entre 0 et 100 message alerte
    while (nbutili < 0 || nbutili > 100)
    {
        cout << "Entrer un chiffre entre 0 et 100 : ";
        cin >> nbutili;
    }

    //Si le chiffre n'est pas égale à celui qui est random et qu'il reste des essaies, il restera dans la boucle
    while (nbutili != iRandom && nbdefois != 5)
    {

        cout << "Vous n'avez pas le bon nombre" << endl;
        nbdefois++;
        cout << "Entrer un chiffre entre 0 et 100 : ";
        cin >> nbutili;
    }
    //Si le chiffre random est le même que celui devinez, il donne le message qu'il a trouver 

    if (nbutili == iRandom)
    {
        cout << "Vous avez le bon nombre" << endl;
    }
    else
    {
        cout << "Vous n'avez pas eu le bon nombre et vous avez essayer 5 fois" << endl;
    }
    system("pause");


    return 0;
}