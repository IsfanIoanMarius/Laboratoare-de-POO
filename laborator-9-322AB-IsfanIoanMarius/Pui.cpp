#include"Pui.hpp"

Pui::Pui()
{
    varsta = 0;
    greutate = 0;
}

Pui::Pui(int v,int g)
{
    varsta = v;
    greutate = g;
}

Pui::Pui(Pui& obj)
{
    varsta = obj.varsta;
    greutate = obj.greutate;
}

int Pui::getV()const
{
    return varsta;
}

int Pui::getG()const
{
    return greutate;
}

void Pui::afisare()
{
    cout<<getV()<<" "<<getG();
}

