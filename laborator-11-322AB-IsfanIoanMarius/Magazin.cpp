#include "Magazin.hpp"

Magazin :: Magazin()
{

}


void Magazin :: cumpara(const char* d,int nr,double p)
{
    int ok = 0;
    for(int i = 0 ; i < int(cumparate.size()) ; i++)
        if(strcmp(cumparate[i].get_Nume(),d)==0)
            {
                ok = 1;
                cumparate[i].add_produse(nr);
            }

    if(ok == 0)
    {
        Produs prod(d,nr,p);
        //cumparate.push_back(prod);
    }
}

void Magazin :: vinde(const char*d,int nr)
{
    int ok = 0;
    for(int i = 0 ; i < int(cumparate.size()) ; i++)
        if(strcmp(cumparate[i].get_Nume(),d)==0)
            {
                ok = 1;
                cumparate[i].scade_produse(nr);
                i = int(cumparate.size());
            }
    if(ok == 0)
        cout<<"Nu mai este pe stoc";
}

int Magazin :: cate_cv(const char* d)
{
    for(int i = 0 ; i < int(cumparate.size()) ; i++)
        if(strcmp(cumparate[i].get_Nume(),d)==0)
            return cumparate[i].get_NRprod();
    return 0;
}



