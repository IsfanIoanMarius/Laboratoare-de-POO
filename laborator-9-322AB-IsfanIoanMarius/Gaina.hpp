#pragma once
#include"Pui.hpp"

class Gaina : public Pui
{
    int nr_oua;

public:

    Gaina();
    Gaina(int n,int v,int g);
    Gaina(Gaina& g);
    ~Gaina(){}

    int getN()const;
    void afisare();

};
