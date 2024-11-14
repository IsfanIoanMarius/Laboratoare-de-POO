#include"Gaina.hpp"


Gaina::Gaina() : Pui()
{
    nr_oua = 0;
}


Gaina::Gaina(int n,int g,int v) : Pui( v, g)
{
    nr_oua = n;
}


Gaina::Gaina(Gaina& g):Pui(g)
{
    nr_oua = g.nr_oua;

}


int Gaina::getN()const
{
    return nr_oua;
}

void Gaina :: afisare()
{
    cout<<getN();
}


