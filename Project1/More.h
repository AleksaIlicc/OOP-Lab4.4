#pragma once
#include "Segment.h"
#include <iostream>
using namespace std;
class More :
    public Segment
{
private:
    float stepenPlavetnila;
    float maksimalnaSnagaVetra;
public:
    More();
    More(string naziv, float P,float S, float MSV);
    void izracunajkLepote() override;
    void izracunajkTezine() override;
    void stampaj() override;
    inline float getStepenP() {
        return stepenPlavetnila;
    }
    inline float getMSV() {
        return maksimalnaSnagaVetra;
    }
};

