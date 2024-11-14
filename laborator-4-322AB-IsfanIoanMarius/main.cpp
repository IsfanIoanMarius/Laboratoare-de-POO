#include "Fractie.h"

using namespace std;

int main()
{
    Fractie a1,a2,a3,a3_inv,o,copie;
    const Fractie c(10,15);

    a1.setData(1,4);
    a2.setData(3,2);
    a3.setData(5,6);

    Fractie copie2(c);
    copie = c;

    cout<<o.getA()<<" "<<o.getB()<<endl;

    cout<<copie.getA()<<" "<<copie.getB()<<endl;
    cout<<copie2.getA()<<" "<<copie2.getB()<<endl;

    cout<<"Numitorul si numaratorul lui a1: "<<a1.getA()<<"/"<<a1.getB()<<endl;

    cout<<"Valoarea fractiei a2: "<<a2.getValoare()<<endl;


    a3_inv = a3.getInv();
    cout<<"Inversa lui a3 este: "<<a3_inv.getA()<<" "<<a3_inv.getB()<<endl;

    cout<<endl;
    Fractie f,g,h,i;

    f = a1+a2;
    g = a1-a2;
    h = a1*a2;
    i = a1/a2;
    cout<<"Suma: "<<f.getA()<<" "<<f.getB()<<endl;
    cout<<"Scaderea: "<<g.getA()<<" "<<g.getB()<<endl;
    cout<<"Inmultirea: "<<h.getA()<<" "<<h.getB()<<endl;
    cout<<"Impartirea: "<<i.getA()<<" "<<i.getB()<<endl;

    Fractie e1(1,1),e2(1,1),e3(1,1),e4(1,1),test(3,2);

    e1 += test;
    e2 -= test;
    e3 *= test;
    e4 /= test;
    cout<<endl;
    cout<<"Suma: "<<e1.getA()<<" "<<e1.getB()<<endl;
    cout<<"Scaderea: "<<e2.getA()<<" "<<e2.getB()<<endl;
    cout<<"Inmultirea: "<<e3.getA()<<" "<<e3.getB()<<endl;
    cout<<"Impartirea: "<<e4.getA()<<" "<<e4.getB()<<endl;


    bool v1,v2;
    Fractie f1(1,1),f2(3,2),f3(1,1);
    v1 = (a1 == a2);
    v2 = (copie == c);

    cout<<endl;
    cout<<"Verificare ==: "<<v1<<" "<<v2<<endl;

    v1 = (a1 != a2);
    v2 = (copie != c);

    cout<<"Verificare !=: "<<v1<<" "<<v2<<endl;

    v1 = (f1<f2);


    cout<<"Verificare <: "<<v1<<endl;

    v1 = (f1>f2);
    v2 = (f1.operator>(f2));

    cout<<"Verificare >: "<<v1<<" "<<v2<<endl;

    v1 = (f1 <= f3);

    cout<<"Verificare <=: "<<v1<<endl;

    v1 = (f2 >= f3);

    cout<<"Verificare >=: "<<v1<<endl;

    return 0;
}
