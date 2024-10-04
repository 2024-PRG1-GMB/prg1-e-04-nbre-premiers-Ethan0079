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
    bool exit = false;
    char result;

    do {
        do {
            cout << "Enter une valeur [2-1000]" << endl;
            cin >> nbr_max;

        } while (nbr_max < 2 || nbr_max > 1000);

        cout << "Voici la liste des nombres premiers" << endl;
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
                cout << nombre << endl;
            }
        }

        cout << "Voulez-vous recommencer [O/N]" << endl;
        cin >> result;
        if(result == 'O' || result == 'o')
        {
            exit = true;
        }
        else
        {
            exit = false;
        }
    } while(exit);

    return EXIT_SUCCESS;
}