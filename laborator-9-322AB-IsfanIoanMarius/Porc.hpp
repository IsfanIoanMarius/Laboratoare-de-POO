#pragma once
#include"Baza.hpp"

class Porc:public Baza
{
    int varsta;
    int greutate;

public:

    Porc();
    Porc(int,int);
    Porc(Porc& obj);

    int getV()const;
    int getG()const;
    void afisare();
};
