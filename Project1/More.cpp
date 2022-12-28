#include "More.h"

void More::izracunajkTezine() {
	koeficijentTezine = maksimalnaSnagaVetra * povrsina / (koeficijentLepote - 1);
}
void More::stampaj()
{
	Segment::stampaj();
	cout << "Stepen Plavetnila: " << stepenPlavetnila << endl;
	cout << "Maksimalna Snaga Vetra: " << maksimalnaSnagaVetra << endl;
	cout << endl;
}
More::More()
{
	stepenPlavetnila = 0;
	maksimalnaSnagaVetra = 0;
}
More::More(string naziv, float P,float S, float MSV):Segment(naziv,P)
{
	stepenPlavetnila = S;
	maksimalnaSnagaVetra = MSV;
	izracunajkLepote();
	izracunajkTezine();
}
void More::izracunajkLepote() {
	koeficijentLepote = maksimalnaSnagaVetra * stepenPlavetnila / povrsina;
}