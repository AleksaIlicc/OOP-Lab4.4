#include "Mocvara.h"

void Mocvara::izracunajkTezine() {
	koeficijentTezine = (1-stepenZitkostiMulja)*(1-1/(stepenZitkostiMulja*povrsina));
}
void Mocvara::stampaj()
{
	Segment::stampaj();
	cout << "Stepen Zitkosti Mulja: " << stepenZitkostiMulja << endl;
	cout << endl;
}
Mocvara::Mocvara()
{
	stepenZitkostiMulja = 0;
}
Mocvara::Mocvara(string naziv, float P, float Z):Segment(naziv,P)
{
	stepenZitkostiMulja = Z;
	izracunajkTezine();
	izracunajkLepote();
}
void Mocvara::izracunajkLepote() {
	koeficijentLepote = (1 - koeficijentTezine);
}
