#pragma once
#include "Segment.h"
#include <fstream>;
class AzdajinPut
{
private:
	Segment** segmenti;
	int used;
	int brSeg;
public:
	AzdajinPut();
	AzdajinPut(int brS);
	~AzdajinPut();
	void dodajSegment(Segment* s);
	void sortirajPokTezine();
	void sortirajPokLepote();
	void stampaj();
	void printajUFajl(const string& filename);
};

