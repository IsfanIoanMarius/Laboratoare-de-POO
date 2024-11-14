#include "Casa_cu_gr.hpp"

int main()
{


    Teren t("Ana",5);
    Casa c("Ana",5,10,97);
    Gradina g("Marius",5,50,197);
    Casa_cu_gradina csg("Geiorge",5,10,97,50,197,"Aviatiei");
    t.afisare();
    c.afisare();
    g.afisare();
    cout<<endl<<endl;
    csg.afisare();
    cout<<endl<<endl<<csg.getP_T()<<endl;
    cout<<c.getP_T();
    cout<<endl<<g.getP_T()<<"    "<<g.get_sG();



/*
    int poz[5];
    int i,j;
    Teren **v;

    v = new Teren*[5];

    v[0] = new Teren("Ana",5);
    v[1] = new Casa("Maria",10,50,90);
    v[2] = new Gradina("Maria",10,50,90);
    v[3] = new Casa_cu_gradina("Geiorge",5,10,97,50,197,"Aviatiei");
    v[4] = new Teren("Mihai",60);

    for(i = 0;i < 4;i++)
        poz[i] = i;


    for(i = 0 ; i < 4 ; i++)
        for(j = i+1 ; j < 5 ; j++)
            if(v[poz[i]].getP_T() > v[poz[j]].getP_T())
                {
                    int aux;
                    aux = poz[i];
                    poz[i] = poz[j];
                    poz[j] = aux;
                }



    for (i = 0 ; i < 5 ; i++)
        v[poz[i]].afisare();


*/



    return 0;
}
