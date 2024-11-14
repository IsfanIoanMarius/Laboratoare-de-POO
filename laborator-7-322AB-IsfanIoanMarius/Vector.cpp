#include"Vector.hpp"
#include"Fractie.hpp"
#include"Nr_complex.hpp"
template<class X>
Vector<X> :: Vector()
{
    dim = 0;
    buf = '\0';
}

template<class X>
Vector<X> :: Vector(int d,X *b)
{
    dim = d;
    buf = new X[dim];

    for(int i=0 ; i < dim ; i++)
        buf[i] = b[i];
}

template<class X>
Vector<X> :: Vector(Vector &obj)
{
    dim = obj.dim;
    buf = new X[dim];

    for(int i=0 ; i < dim ; i++)
        buf[i] = obj.buf[i];
}

template<class X>
Vector<X> :: ~Vector()
{
    if(buf != NULL)
        delete[]buf;
}


template<class X>
void Vector<X> :: afisare()
{
    int i = 0;

    for(i = 0 ; i < dim ; i++)
        cout<<buf[i]<<" ";
}



void testI()
{
    int ni;
    int* Vi;
    Vector<int> vi(ni,Vi);
    vi.afisare();
}

void testD()
{
    int nd;
    double* Vd;
    Vector<double> vd(nd,Vd);
    vd.afisare();
}

void testF()
{
    int nf;
    Fractie* Vecf;
    Vector<Fractie> vf(nf,Vecf);
    vf.afisare();
}


void testN()
{
    int nn;
    Nr_complex* Vecn;
    Vector<Nr_complex> vn(nn,Vecn);
    vn.afisare();
}













