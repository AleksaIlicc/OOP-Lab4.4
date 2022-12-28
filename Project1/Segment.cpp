#include "Segment.h"
#include <iostream>
using namespace std;
Segment::Segment()
{
	koeficijentLepote = 0;
	koeficijentTezine = 0;
	naziv = "";
	povrsina = 0;
}
Segment::Segment(string naziv, float P)
{
	this->naziv = naziv;
	povrsina = P;
}
Segment::~Segment()
{
}
void Segment::stampaj() {
	cout << "Naziv: " << naziv << endl;
	cout << "Koef Tezine: " << koeficijentTezine << endl;
	cout << "Koef Lepote: " << koeficijentLepote << endl;
	cout << "Povrsina: " << povrsina << endl;
}