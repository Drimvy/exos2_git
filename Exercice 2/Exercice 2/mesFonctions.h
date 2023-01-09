#ifndef MES_FOMCTIONS_H
#define MES_FOMCTIONS_H

// Fonction Extract
unsigned short Extract(unsigned long seconde, unsigned short int &minute, unsigned short int &heure);

void AfficheB(long ValD, char ValH, short int TChamp);


int CalculSurfaceRectangleInt(int longueur, int largeur);

double CalculSurfaceRectangleDouble(double longueur, double  largeur);

int CalculSurfaceRectangleXY(int X1, int Y1, int X2, int Y2);

#endif // !MES_FOMCTIONS_H

