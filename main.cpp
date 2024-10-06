/**
 * \file main.cpp
 * \version 1.0.0
 * \author Ethan Marchand
 * \date : 04.10.2024
 * \brief : Nombre premier
*/

#include <iostream>
#include <limits>
using namespace std;

int main() {

    int nbr_max;
    int nombre;
    int compteur;
    char result;

    do {
        cout << "Enter une valeur [2-1000]" << endl;
        cin >> nbr_max;

    } while (nbr_max < 2 || nbr_max > 1000);

    cout << "Voici la liste des nombres premiers" << endl;
    nombre = 0;
    while(nombre < nbr_max){
        compteur = 0;
        nombre++;

        for (int i = 1 ; i <= nombre ; i++)
        {
            if ((nombre % i) == 0)
                compteur++;
        }

        if(compteur == 2)  //Le nombre premier se divise sur 1 et sur lui meme
        {
            // Sortir les nombres premiers 5 par 5
            cout << '\t' << nombre << " " << '\t' << endl;
        }
    }

    do {
        cout << "Voulez-vous recommencer [O/N]" << endl;
        cin >> result;
    } while(result != 'O' && result != 'o' && result != 'N' && result != 'n');

    if(result == 'O' || result == 'o')
    {
        return main();
    }
    else
    {
        return EXIT_SUCCESS;;
    }
}