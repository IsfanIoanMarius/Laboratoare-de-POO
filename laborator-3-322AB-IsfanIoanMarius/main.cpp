#include"Casa.h"

int main()
{

    Casa a;
    Casa b("a","b","c",5);
    Casa c(b);

    b.modif("1a","1b","1c",10);

    a.afisare();
    b.afisare();
    c.afisare();


    Casa *v;
    v = new Casa[5];
    v[0].modif("Andrei","Grozavesti","5567",100);
    v[1].modif("Razvan","Militari","50567",10);
    v[2].modif("Matei","Grozavesti","5567",1030);
    v[3].modif("Gabi","Pallady","150567",1100);
    v[4].modif("George","Unirii","55367",150);


    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
            if(strcmp(v[i].getAdresa(),v[j].getAdresa())>0)
        {
            Casa aux;
            aux = v[i];
            v[i]=v[j];
            v[j]=aux;
        }

    int maxi=0,pozitie=0;
    for(int i=0;i<5;i++)
        if(getVechime(v[i]) >= maxi)
            {
                pozitie = i;
                maxi = getVechime(v[i]);
            }

    //Cea mai veche casa
    v[pozitie].afisare();

    delete []v;

    return 0;
}
