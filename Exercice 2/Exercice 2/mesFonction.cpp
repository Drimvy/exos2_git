#include <iostream>
#include <iomanip>

unsigned short Extract(unsigned long seconde, unsigned short int &minute, unsigned short int &heure)
{
	int sec;

	heure = seconde / 3600;
	minute = seconde / 60;
	sec = seconde - (heure * 3600) - (minute * 60);

	return (sec);

}

void AfficheB(long ValD, char ValH, short int TChamp)
{
	if (ValH == 'D' | 'd')
	{
		std::cout << "Nombre =" << ValD << "en décimal" << std::endl;
		std::cout << "Nombre =" <<std::setw(TChamp)<< ValD << "en décimal" << std::endl;
	}

	else if (ValH == 'H' | 'h')
	{
		std::cout << "Nombre =" << std::hex << ValD << "en hexadécimal" << std::endl;
		std::cout << "Nombre =" << std::setw(TChamp) << std::hex << ValD << "en hexadécimal" << std::endl;
	}

	else if (ValH != 'H' | 'h'| 'D' | 'd')
	{
		std::cout << "ERREUR donnée entrée pour afficher en hexa ou décimal" << std::endl;
	}
}