#include "Fractie.h"

Fractie::Fractie(int nra,int nrb)
{
    a = nra;
    b = nrb;
}

Fractie::Fractie(const Fractie &f)
{
    a = f.a;
    b = f.b;
}

Fractie & Fractie::operator =(const Fractie &f)
{
    a = f.a;
    b = f.b;
}

double Fractie :: getValoare() const
{
    return (double)a/b;
}

Fractie Fractie :: getInv()
{
    Fractie aux;
    aux.setData(b,a);
    return aux;
}

void Fractie :: setData (int nra,int nrb)
{
    a = nra;
    b = nrb;
}

float Fractie :: getA()
{
    return a;
}

float Fractie :: getB()
{
    return b;
}


Fractie operator +(const Fractie &f1,const Fractie &f2)
{
    Fractie a;
    a.setData(f1.a*f2.b+f2.a*f1.b,f1.b*f2.b);
    return a;
}


Fractie operator -(const Fractie &f1,const Fractie &f2)
{
    Fractie a;
    a.setData(f1.a*f2.b-f2.a*f1.b,f1.b*f2.b);
    return a;
}

Fractie operator *(const Fractie &f1,const Fractie &f2)
{
    Fractie a;
    a.setData(f1.a*f2.a,f1.b*f2.b);
    return a;
}

Fractie operator /(const Fractie &f1,const Fractie &f2)
{
    Fractie a;
    a.setData(f1.a*f2.b,f1.b*f2.a);
    return a;
}


Fractie & Fractie :: operator += (const Fractie &f)
{
    a = a*f.b + b*f.a;
    b = b*f.b;
}

Fractie & Fractie :: operator -= (const Fractie &f)
{
    a = a*f.b - b*f.a;
    b = b*f.b;
}

Fractie & Fractie :: operator *= (const Fractie &f)
{
    a = a*f.a;
    b = b*f.b;
}

Fractie & Fractie :: operator /= (const Fractie &f)
{
    a = a*f.b;
    b = b*f.a;
}


bool Fractie :: operator == (const Fractie &f)
{
    if(a == f.a && b == f.b)
        return true;
    return false;
}

bool Fractie :: operator != (const Fractie &f)
{
    if(a == f.a && b == f.b)
        return false;
    return true;
}



bool Fractie :: operator < (const Fractie &f)
{
    Fractie aux;
    aux.setData(a,b);
    if( aux.getValoare() < (double)(f.a/f.b) )
        return true;
    return false;
}


bool Fractie :: operator > (const Fractie &f)
{
    Fractie aux;
    aux.setData(a,b);
    if(aux.getValoare() > (double)(f.a/f.b) )
        return true;
    return false;
}

bool Fractie :: operator <= (const Fractie &f)
{
    Fractie aux;
    aux.setData(a,b);
    if(aux.getValoare() <= (double)(f.a/f.b) )
        return true;
    return false;
}


bool Fractie :: operator >= (const Fractie &f)
{
    if(this->getValoare() >= f.getValoare() )
        return true;
    return false;
}

