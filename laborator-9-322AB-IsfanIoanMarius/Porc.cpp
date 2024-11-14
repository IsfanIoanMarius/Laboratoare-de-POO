#include"Porc.hpp"


Porc::Porc()
{
    varsta = 0;
    greutate = 0;
}

Porc::Porc(int v,int g)
{
    varsta = v;
    greutate = g;
}

Porc::Porc(Porc& obj)
{
    varsta = obj.varsta;
    greutate = obj.greutate;
}

int Porc::getV()const
{
    return varsta;
}

int Porc::getG()const
{
    return greutate;
}

void Porc::afisare()
{
    cout<<getV()<<" "<<getG();
}
