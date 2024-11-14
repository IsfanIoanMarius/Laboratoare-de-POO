#include "Cladire.hpp"


Cladire::Cladire()
{
    vechime = 0;
    for(int i=0;i<20;i++)
        cod[i] = '/0';
    strcpy(cod,"");
    proprietar = NULL;
    adresa = NULL;
}


Cladire::Cladire(const char *p,const char *a,const char c[],int v)
{
    proprietar = new char[strlen(p)+1];
    strcpy(proprietar,p);
    adresa = new char[strlen(a)+1];
    strcpy(adresa,a);
    strcpy(cod,c);
    vechime = v;
}

void Cladire::modif(const char *p,const char *a,const char c[],int v)
{
    if(proprietar!=NULL)
        delete []proprietar;
    proprietar = new char[strlen(p)+1];
    strcpy(proprietar,p);
    if(adresa!=NULL)
        delete []adresa;
    adresa = new char[strlen(a)+1];
    strcpy(adresa,a);
    strcpy(cod,c);
    vechime = v;
}

void Cladire::modif(const Cladire & obj)
{
    if(proprietar != NULL)
        delete []proprietar;
    proprietar = new char[strlen(obj.proprietar)+1];
    strcpy(proprietar,obj.proprietar);
    if(adresa != NULL)
        delete []adresa;
    adresa = new char[strlen(obj.adresa)+1];
    strcpy(adresa,obj.adresa);
    strcpy(cod,obj.cod);
    vechime = obj.vechime;
}


void Cladire::afisare()
{
    if(proprietar != NULL && adresa !=NULL)
        cout<<proprietar<<" "<<adresa<<" "<<cod<<" "<<vechime<<endl;
    else
        cout<<"NU are proprietar"<<endl;
}


Cladire::~Cladire()
{
    delete []proprietar;
    delete []adresa;
    cout<<"Destructorul\n";
}

int Cladire::getVechime() const
{
    return vechime;
}

char* Cladire::getAdresa() const
{
    return adresa;
}



