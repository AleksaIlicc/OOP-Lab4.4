#pragma once
#include "Segment.h"
#include <iostream>
using namespace std;
class Gora :
    public Segment
{
private:
    float duzinaPuta;
    float razlikaNadmorskeVisine;
    float inverznaPosumljenost;
public:
    Gora();
    Gora(string naziv, float P, float D, float V, float B);
    void izracunajkLepote() override;
    void izracunajkTezine() override;
    void stampaj() override;
    inline float getDuzinaPuta() {
        return duzinaPuta;
    }
    inline float getRazlikaNV() {
        return razlikaNadmorskeVisine;
    }
    inline float getInverznaPos() {
        return inverznaPosumljenost;
    }
};

