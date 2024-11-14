#include "Oras.hpp"

Oras::Oras()
{
    nume=NULL;
}


Oras::Oras(const char* n)
{
    nume=new char[strlen(n)+1];
    strcpy(nume,n) ;
}

Oras::Oras(const Oras& obj)
{
    nume = new char[strlen(obj.nume) + 1];
    strcpy(nume,obj.nume);
}

Oras::~Oras()
{
    delete nume;
}


void Oras::modif(const char* n)
{
    if(nume!=NULL)
        delete nume ;

    nume=new char[strlen(n)+1];
        strcpy(nume,n);
}

char* getNume() const
{
    return nume;
}

Oras & Oras :: operator=(const Oras &obj)
{
    if(nume=NULL)
        delete this->nume;
    nume=new char[strlen(obj.nume)+1];
    strcpy(nume,obj.nume);

    return *this;
}

