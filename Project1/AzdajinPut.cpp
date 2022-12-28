#pragma once
#include "AzdajinPut.h"
#include "Gora.h"
#include "More.h"
#include "Mocvara.h"
AzdajinPut::AzdajinPut()
{
	segmenti = nullptr;
	used = 0;
	brSeg = 0;
}

AzdajinPut::AzdajinPut(int brS)
{
	used = 0;
	brSeg = brS;
	segmenti = new Segment* [brSeg];
	for (int i = 0; i < brSeg; i++)
	{
		segmenti[i] = nullptr;
	}
}

AzdajinPut::~AzdajinPut()
{
	for (int i = 0; i < used; i++)
	{
		delete segmenti[i];
	}
	delete[] segmenti;
}

void AzdajinPut::dodajSegment(Segment* s)
{
	if(used<brSeg){
		segmenti[used] = s;
		used++;
	}
}

void AzdajinPut::sortirajPokTezine()
{	
	int max=0;
	Segment* pom;
	for (int i = 0; i < used-1; i++)
	{
		max = i+1;
		for (int j = i+1; j < used; j++)
		{
			if (segmenti[max]->getKTezine() < segmenti[j]->getKTezine())
				max = j;
		}
		if (segmenti[max]->getKTezine()>segmenti[i]->getKTezine())
		{
			pom = segmenti[max];
			segmenti[max] = segmenti[i];
			segmenti[i] = pom;
		}
	}
}

void AzdajinPut::sortirajPokLepote()
{
	int max = 0;
	Segment* pom;
	for (int i = 0; i < used - 1; i++)
	{
		max = i + 1;
		for (int j = i + 1; j < used; j++)
		{
			if (segmenti[max]->getKLepote() < segmenti[j]->getKLepote())
				max = j;
		}
		if (segmenti[max]->getKLepote() > segmenti[i]->getKLepote())
		{
			pom = segmenti[max];
			segmenti[max] = segmenti[i];
			segmenti[i] = pom;
		}
	}
}


void AzdajinPut::stampaj()
{
	for (int i = 0; i < used; i++)
	{
		segmenti[i]->stampaj();
	}
}
void AzdajinPut::printajUFajl(const string& filename) {
	ofstream outfile;
	outfile.open(filename);
	for (int i = 0; i < used; i++) {
		outfile << "Naziv: " << segmenti[i]->getNaziv() << "	Koef. Tezine: " << segmenti[i]->getKTezine() << "	Koef. Lepote: " << segmenti[i]->getKLepote()
			<< "	Povrsina: " << segmenti[i]->getPovrsina();
		if (auto child1 = dynamic_cast<Gora*>(segmenti[i])) {
			// segmenti[i] is a Child1Segment object
			outfile << "	Duzina Puta: " << child1->getDuzinaPuta()<< "	Razlika Nad Visine: " << child1->getRazlikaNV() << "	Inverzna Posumljenost:" << child1->getDuzinaPuta();
		}
		else if (auto child2 = dynamic_cast<More*>(segmenti[i])) {
			// segmenti[i] is a Child2Segment object
			outfile << "	Stepen Plavetnila: " << child2->getStepenP() << "	Maksimalna Snaga Vetra: " << child2->getMSV();
		}
		else if (auto child3 = dynamic_cast<Mocvara*>(segmenti[i])) {
			// segmenti[i] is a Child2Segment object
			outfile << "	Stepen Zitkosti Mulja: " << child3->getSZM();
		}
		outfile << std::endl;
	}
	outfile.close();
}
