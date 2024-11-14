#include "Cladire.hpp"

int main()
{


    Cladire *v;
    v = new Cladire[4];
    v[0].modif("proprietar","adresa","158",15);
    v[1].modif("EU","AICI","1",10);
    v[2].modif(v[0]);
    v[3].modif("TU","ACOLO","2",20);


    for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
            if(v[i].getVechime()>v[j].getVechime())
            {
                Cladire aux;
                aux.modif(v[i]);
                v[i].modif(v[j]);
                v[j].modif(aux);
            }

    for(int i=0;i<4;i++)
        v[i].afisare();

    delete []v;


    Cladire c;
    c.modif("p","a","1",10);
    c.afisare();
    return 0;
}
