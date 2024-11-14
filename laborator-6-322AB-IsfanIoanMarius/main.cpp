//#include "Oras.hpp"
#include "Locuitor.hpp"
using namespace std;

int main()
{
    int *v;

    v = new int[4];
    for (int i = 0 ; i < 4 ; i++ )
        cin>>v[i];

    Locuitor l(v,4,"ion",450,"Gerog");

    cout<<l.getSumaTot();




    return 0;
}



/*
namespace cerinta2
    {
        Locuitor *v;
        Oras x;
    }

int main()
{
    int* t,nr_t;
    char* a;
    char* n;
    int val = 10;

    nr_t = 6;
    t = new int[nr_t];
    for(int i=0;i<nr_t;i++)
        t[i] = i+3;

    a= new char[3];
    a = "eue";
    n = new char[strlen(a)+1];
    strcpy(n,a);


    //Locuitor m(t,nr_t,a,val,n);

    //cout<<m.getValoare()<<" "<<m.getSumaTot()<<" "<<m.getNR();

    cerinta2::v=new Locuitor[6];
    for(int i=0; i < 6 ; i++)
        cerinta2::v[i] = Locuitor(t,nr_t,a,val,n);

    cerinta2::x = Oras(cerinta2::v,6,"Gigiel");


    for(int i=0 ; i<5 ; i++)
        for(int j=i+1 ; j<6 ; j++)
            if(cerinta2::v[i].getSumaTot() > cerinta2::v[j].getSumaTot())
                {
                    Locuitor aux;
                    aux = cerinta2::v[i];
                    cerinta2::v[i] = cerinta2::v[j];
                    cerinta2::v[j] = aux;
                }

    cerinta2::x.change_primar("Marcel");

    cout<<cerinta2::x.getPrimar();
    return 0;

}



/*
    int* t,nr_t;
    char* a;
    char* n;
    int val;

    nr_t = 5;
    t = new int[nr_t];
    for(int i=0;i<nr_t;i++)
        t[i] = i+3;
    a= new char[3];
    a = "eue";
    n = new char[strlen(a)+1];
    strcpy(n,a);

    Locuitor m1();
    cin>>val;
    Locuitor m2(t,nr_t,a,val,n);
    Locuitor k();

    k = m2;

    cout<<k.getValoare()<<" "<<k.getNR();
    */
