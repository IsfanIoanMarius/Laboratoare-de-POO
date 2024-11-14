#include"Teren.hpp"

Teren::Teren()
{
    proprietar = NULL;

    pret = 0;
}

Teren::Teren(const char* p,int pr)
{
    proprietar = new char[strlen(p) + 1];
    strcpy(proprietar,p);

    pret = pr;
}

Teren::Teren(Teren& obj)
{
    proprietar = new char[ strlen( obj.proprietar ) + 1 ];
    strcpy( proprietar , obj.proprietar );

    pret = obj.pret;
}

Teren::~Teren()
{
    pret = 0;
    if( proprietar != NULL )
        delete[] proprietar;
}

int Teren::get_pT()
{
    return pret;
}

int Teren::getP_T()
{
    return pret;
}



void Teren::afisare()
{
    cout<<proprietar<<" "<<pret;
}







