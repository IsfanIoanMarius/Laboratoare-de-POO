#include "Nr_complex.hpp"

Nr_complex :: Nr_complex()
{
    a = 0;
    b = 0;
}

Nr_complex :: Nr_complex (int nra,int nrb)
{
    a = nra;
    b = nrb;
}

Nr_complex :: Nr_complex (const Nr_complex &obj)
{
    a = obj.a;
    b = obj.b;
}


void Nr_complex :: setdata(int nra,int nrb)
{
    a = nra;
    b = nrb;
}

float Nr_complex::getModul() const
{
    return (float)( sqrt(a*a + b*b) );
}


bool Nr_complex :: operator > (const Nr_complex &obj)
{
    Nr_complex aux;
    aux.setdata(a,b);

    if(aux.getModul() > obj.getModul())
        return true;
    return false;
}

ostream& operator << (ostream& os , const Nr_complex& obj)
{
    os<<obj.a << " + " << obj.b << "*i" << "  ";
    return os;
}

void Nr_complex :: afisare()
{
    cout<<a<<" + i"<<b;
}



