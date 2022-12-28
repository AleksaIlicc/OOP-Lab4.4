#pragma once
#include "Segment.h"
#include <iostream>
using namespace std;
class Mocvara :
    public Segment
{
private:
    float stepenZitkostiMulja;
public:
    Mocvara();
    Mocvara(string naziv, float P, float Z);
    void izracunajkLepote() override;
    void izracunajkTezine() override;
    void stampaj() override;
    inline float getSZM() {
        return stepenZitkostiMulja;
    }
};

