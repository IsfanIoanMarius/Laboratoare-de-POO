#pragma once

#include"Teren.hpp"

class Gradina:public virtual Teren
{
    int suprafata;
    int pret;

public:

    Gradina();
    Gradina(const char* ,int ,int ,int);
    Gradina(Gradina& obj);

    int get_sG();
    int get_pG();

    int getP_T();
    void afisare();
};

