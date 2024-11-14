#pragma once

#include"Teren.hpp"

class Casa:public virtual Teren
{
    int suprafata;
    int pret;

public:

    Casa();
    Casa(const char* ,int ,int ,int);
    Casa(Casa& obj);

    int get_pC();
    int get_sC();

    int getP_T();
    void afisare();
};

