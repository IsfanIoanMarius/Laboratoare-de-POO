#include "Fractie.hpp"

Fractie :: Fractie ()
{
    a = 0;
    b = 0;
}

Fractie :: Fractie (int nra,int nrb)
{
    a = nra;
    b = nrb;
}

Fractie :: Fractie (const Fractie &f)
{
    a = f.a;
    b = f.b;
}

double Fractie :: getValoare() const
{
    return (double)a/b;
}

void Fractie :: setData (int nra,int nrb)
{
    a = nra;
    b = nrb;
}


bool Fractie :: operator > (const Fractie &f)
{
    Fractie aux;
    aux.setData(a,b);

    if(aux.getValoare() > (double)(f.a/f.b) )
        return true;
    return false;
}

ostream& operator << (ostream& os,const Fractie& obj)
{
    os << obj.a << "/" << obj.b << "   ";
    return os;
}

void Fractie :: afisare()
{
    cout<<a<<" "<<b<<endl;
}

