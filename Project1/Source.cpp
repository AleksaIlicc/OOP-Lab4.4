#include "AzdajinPut.h"
#include "More.h"
#include "Mocvara.h"
#include "Gora.h"
#include <fstream>
#include <iostream>
using namespace std;
int main() {
	double broj;
	AzdajinPut* put1 = new AzdajinPut(2331);
	string naziv;
	int P;
	float SZM;
	ifstream file("mocvara.txt");
	while (file.good())
	{
		file >> naziv;
		file >> P;
		file >> SZM;
		put1->dodajSegment(new Mocvara(naziv, P, SZM));
	}
	file.close();
	float SP, MSV;
	ifstream file1("more.txt");
	while (file1.good())
	{
		file1 >> naziv;
		file1 >> P;
		file1 >> SP;
		file1 >> MSV;
		put1->dodajSegment(new More(naziv, P, SP,MSV));
	}
	file1.close();
	float DP,NV,IP;
	ifstream file2("gora.txt");
	while (file2.good())
	{
		file2 >> naziv;
		file2 >> P;
		file2 >> DP;
		file2 >> NV;
		file2 >> IP;
		put1->dodajSegment(new Gora(naziv, P, DP, NV,IP));
	}
	file2.close();
	put1->sortirajPokTezine();
	put1->printajUFajl("outputT.txt");
	put1->sortirajPokLepote();
	put1->printajUFajl("outputL.txt");

	delete put1;

	/*Mocvara m3("moj naziv3", 45, 2.3);
	Mocvara m4("moj naziv4", 25, 0.2);
	Mocvara m5("moj naziv5", 15, 2.1);
	Segment* s3 = &m3;
	Segment* s4 = &m4;
	Segment* s5 = &m5;
	put1->dodajSegment(new Mocvara("moj naziv1", 55, 1.5));
	put1->dodajSegment(new Mocvara("moj naziv2", 51, 0.1));
	put1->dodajSegment(s3);
	put1->dodajSegment(s4);
	put1->dodajSegment(s5);
	put1->stampaj();*/

}