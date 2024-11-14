#include"Impozit.hpp"

Impozit :: Impozit()
{
    taxe = NULL;
    nr_taxe = 0;
}

Impozit :: Impozit(const int *t,const int nr_t)
{
    taxe = new int[nr_t];
    for(int i=0;i<nr_t;i++)
        taxe[i] = t[i];
    nr_taxe = nr_t;
}

Impozit :: Impozit(const Impozit& obj)
{
    taxe = new int[obj.nr_taxe];
    nr_taxe = obj.nr_taxe;

    for(int i=0;i<nr_taxe;i++)
        taxe[i] = obj.taxe[i];
}

Impozit :: ~Impozit()
{
    if(taxe!=NULL)
        delete(taxe);
}

int Impozit :: getSumaTot() const
{
    int s = 0;
    for(int i=0;i<nr_taxe;i++)
        s = s + taxe[i];
    return s;
}
