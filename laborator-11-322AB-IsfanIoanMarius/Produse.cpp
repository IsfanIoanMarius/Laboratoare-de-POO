#include "Produse.hpp"

Produs :: Produs()
{
    denumire = NULL;
    nr_prod = 0;
    pret = 0.0;
}

Produs :: Produs(const char* d , int nr , double p)
{
    denumire = new char[strlen(d) + 1];
    strcpy(denumire,d);
    nr_prod = nr;
    pret = p;
}


Produs :: Produs(const Produs& obj)
{
    denumire = new char[strlen(obj.denumire) + 1];
    strcpy(denumire,obj.denumire);

    nr_prod = obj.nr_prod;
    pret = obj.pret;
}

Produs :: ~Produs()
{
    nr_prod = 0;
    pret = 0.0;

    if(denumire != NULL)
        delete[]denumire;
}

int Produs :: get_NRprod()
{
    return nr_prod;
}
void Produs :: add_produse(int nr)
{
    nr_prod = get_NRprod() + nr;
}

void Produs :: scade_produse(int nr)
{
    nr_prod = get_NRprod() - nr;
}

char* Produs :: get_Nume()
{
    return denumire;
}






