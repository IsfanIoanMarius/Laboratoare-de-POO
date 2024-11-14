#pragma once
#include"Baza.hpp"

class Vaca:public Baza
{
    int varsta;
    int greutate;

public:

    Vaca();
    Vaca(int,int);
    Vaca(Vaca& obj);

    int getV()const;
    int getG()const;
    void afisare();
};
