#include"Locuinta.hpp"

Locuinta :: Locuinta()
{
    adresa = NULL;
    valoare = 0;
}

Locuinta :: Locuinta(const char* a,const int val)
{
    valoare = val;

    adresa = new char[strlen(a)+1];
    strcpy(adresa,a);
}

Locuinta :: Locuinta(const Locuinta& obj)
{
    valoare = obj.valoare;

    adresa = new char[strlen(obj.adresa)+1];
    strcpy(adresa,obj.adresa);
}

Locuinta :: ~Locuinta()
{
    if(adresa!=NULL)
        delete[]adresa;
}
