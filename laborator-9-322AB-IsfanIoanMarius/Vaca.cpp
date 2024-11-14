#include"Vaca.hpp"

Vaca::Vaca()
{
    varsta = 0;
    greutate = 0;
}

Vaca::Vaca(int v,int g)
{
    varsta = v;
    greutate = g;
}

Vaca::Vaca(Vaca& obj)
{
    varsta = obj.varsta;
    greutate = obj.greutate;
}

int Vaca::getV()const
{
    return varsta;
}

int Vaca::getG()const
{
    return greutate;
}

void Vaca::afisare()
{
    cout<<getV()<<" "<<getG();
}
