#include "Cal.hpp"

Cal::Cal()
{
    varsta = 0;
    greutate = 0;
}

Cal::Cal(int v,int g)
{
    varsta = v;
    greutate = g;
}

Cal::Cal(Cal& obj)
{
    varsta = obj.varsta;
    greutate = obj.greutate;
}

int Cal::getV()const
{
    return varsta;
}

int Cal::getG()const
{
    return greutate;
}

void Cal::afisare()
{
    cout<<getV()<<" "<<getG();
}
