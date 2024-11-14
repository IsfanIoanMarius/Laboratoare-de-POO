#include "Fractie.hpp"
#include "Vector.hpp"
#include "Nr_complex.hpp"

using namespace std;

int main()
{

//   INT:


    int ni;
    int *Veci;

    cin>>ni;
    Veci = new int[ni];

    for(int i=0;i<ni;i++)
        Veci[i] = i;


    Vector<int> vi(ni,Veci);
    vi.afisare();


//  DOUBLE:

    int nd;
    double *Vecd;

    cin >> nd;
    Vecd = new double[nd];

    for(int i = 0 ; i < nd ; i++)
        Vecd[i] = i + 0.23;

    Vector<double> vd(nd,Vecd);
    vd.afisare();


// CLASA FRACTIE

    int nf;
    Fractie *Vecf;

    cin>>nf;
    Vecf = new Fractie[nf];

    for(int i = 0 ; i < nf ; i++)
        Vecf[i].setData(i,1);


    Vector<Fractie> vf(nf,Vecf);
    vf.afisare();

// CLASA Nr_complex

    int nn;
    Nr_complex *Vecn;

    cin >> nn;
    Vecn = new Nr_complex[nn];

    for(int i = 0 ; i < nn ; i++)
        Vecn[i].setdata(i,1);

    Vector<Nr_complex> vn(nn,Vecn);
    vn.afisare();


    delete[]Veci;
    delete[]Vecd;
    delete[]Vecf;
    delete[]Vecn;

    return 0;
}




