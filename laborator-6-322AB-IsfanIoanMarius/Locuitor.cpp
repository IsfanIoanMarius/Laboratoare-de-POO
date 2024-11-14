#include"Locuitor.hpp"

Locuitor::Locuitor()
{
    taxe = NULL;
    nr_taxe = 0;

    adresa = NULL;
    valoare = 0;

    nume = NULL;
}

Locuitor::Locuitor(const int* t,const int nr_t,const char* a,const int val,const char* n):Impozit(t,nr_t),Locuinta(a,val)
{

    nume = new char[strlen(n)+1];
    strcpy(nume,n);

}

Locuitor::Locuitor(const Locuitor& obj):Impozit(obj),Locuinta(obj)
{
    taxe = new int[obj.nr_taxe];
    nr_taxe = obj.nr_taxe;

    for(int i=0;i<nr_taxe;i++)
        taxe[i] = obj.taxe[i];

    valoare = obj.valoare;
    adresa = new char[strlen(obj.adresa)+1];
    strcpy(adresa,obj.adresa);

    nume = new char[strlen(obj.nume)+1];
    strcpy(nume,obj.nume);

}

Locuitor::~Locuitor()
{
    if(nume != NULL)
        delete(nume);
}


Locuitor& Locuitor :: operator = (const Locuitor& obj)
{
    taxe = new int[obj.nr_taxe];
    nr_taxe = obj.nr_taxe;

    for(int i=0;i<nr_taxe;i++)
        taxe[i] = obj.taxe[i];


    valoare = obj.valoare;

    adresa = new char[strlen(obj.adresa)+1];
    strcpy(adresa,obj.adresa);

    nume = new char[strlen(obj.nume)+1];
    strcpy(nume,obj.nume);

    return *this;
}






int Locuitor::getValoare()const
{
    return valoare;
}

int Locuitor::getNR()const
{
    return nr_taxe;
}











