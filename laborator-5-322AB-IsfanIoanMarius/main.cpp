#include "Tara.hpp"

int main()
{
    int i,j;

    Tara *v;
    v=new Tara[5];

    for(i=0 ; i<5 ; i++)
        cin>>v[i];

    for(i=0 ; i<4 ; i++)
    {
        for(j=i+1 ; j<5 ; j++)
            if(v[i].getPopulatie()>v[j].getPopulatie())
            {
                aux=v[j];
                v[j]=v[i];
                v[i]=aux;

            }
    }
    for(i=0;i<5;i++)
        if(v[i].getPopulatie()>10000)
            cout<<v[i]<<endl;

    return 0;
}

