#pragma once
#include <string>
using namespace std;

class Segment
{
protected:
	float koeficijentTezine;
	float koeficijentLepote;
	string naziv;
	float povrsina;
public:
	Segment();
	Segment(string naziv, float P);
	virtual ~Segment();
	virtual void izracunajkTezine() = 0;
	virtual void izracunajkLepote() = 0;
	virtual void stampaj();
	inline float getKTezine() {
		return koeficijentTezine;
	}
	inline float getKLepote() {
		return koeficijentLepote;
	}
	inline float getPovrsina() {
		return povrsina;
	}
	inline string getNaziv() {
		return naziv;
	}

};

