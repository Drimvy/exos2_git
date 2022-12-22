// Canevas Ex2 SL228_POBJ language C++ 
// Visual Studio 2015
// 15.12.2022 C. Mieville

#include <iostream>
#include <iomanip>
#include <string>
#include "mesFonctions.h"
using namespace std;




// Fonction AfficheB


// Fonction CalculSurfaceRectangle


int main (void)
{
	char UserAnswer;
	unsigned long ValA;
	unsigned short int Minute;
	unsigned short int Heure;
	unsigned short Sec;
	int ValB;
	char HorD;
	int space;
	// Variables pour test A, B et C
	

	// a adapter
	cout << "Exercice 2 : Caroline Mieville" << endl;


	do {
		cout << "Test A, B ou C, Q pour Quitter" << endl;
		cin >> UserAnswer;
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				cout << "TestA: entrez un nombre de secondes" << endl;
				cin >> ValA;
				Sec = Extract(ValA, Minute, Heure);
				cout << "ValA ="<< ValA <<"NbHeures =" << Heure << " NbMinutes =" << Minute << "NbSecondes = ss" << Sec << endl;				
			break;

			case 'B':
			case 'b':
				cout << "TestB: entrez un nombre " <<  endl;
				cin >> ValB; 
				cout << "Voulez-vous afficher en Hexa (H) ou en décimal (D)?" << endl;
				cin >> HorD;
				cout << "Quel taille de champ voulez-vous ?" << endl;
				cin >> space;
				AfficheB(ValB, HorD, space);
				
			break;

			case 'C':
			case 'c':
				cout << "TestC: calculs surface " <<  endl;

				// a)	Avec 2 paramètres int 25 et 45
				
				// b)	Avec 2 paramètres double 23.25 et 44.33'
				
				// c)	Avec 4 paramètres int 20,20, 60,40
				

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}

