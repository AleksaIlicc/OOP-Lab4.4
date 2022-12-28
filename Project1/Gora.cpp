#include "Gora.h"

void Gora::izracunajkTezine() {
	koeficijentTezine = inverznaPosumljenost * duzinaPuta / (duzinaPuta + povrsina + razlikaNadmorskeVisine + duzinaPuta / povrsina);
}
void Gora::stampaj()
{
	Segment::stampaj();
	cout << "Duzina puta: " << duzinaPuta << endl;
	cout << "Relativna razlika nadmoreske visine izmedju najnize i najvise tacke: " << razlikaNadmorskeVisine << endl;
	cout << "Stepen inverzne posumljenosti: " << inverznaPosumljenost << endl;
	cout << endl;
}
Gora::Gora()
{
	duzinaPuta = 0;
	razlikaNadmorskeVisine = 0;
	inverznaPosumljenost = 0;
}
Gora::Gora(string naziv, float P, float D, float V, float B):Segment(naziv,P)
{
	duzinaPuta = P;
	razlikaNadmorskeVisine = V;
	inverznaPosumljenost = B;
	izracunajkTezine();
	izracunajkLepote();
}
void Gora::izracunajkLepote() {
	koeficijentLepote = (1 - inverznaPosumljenost) * razlikaNadmorskeVisine;
}
