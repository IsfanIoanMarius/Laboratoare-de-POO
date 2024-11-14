#include "Tara.hpp"

Tara::Tara():Oras()
{
    populatie=0;
    denumire=null;
}

Tara::Tara(char* n,int p,char* d):Oras(n)
{
    populatie=p;
    denumire=new char[strlen(d)+1];
    strcpy(denumire,d) ;
}

Tara::Tara(const Tara& obj):Oras(const(Oras&)obj)
{
    populatie = obj.populatie;
    denumire = new char[strlen(obj.denumire)+1];
    strcpy(dneumire,obj.denumire);
}

Tara::~Tara()
{
    delete denumire;
}

void Tara::modif(char* n,int p, char* d):mod(n)
{
    populatie=p;
    if(denumire!=null)
        delete denumire;

    denumire=new char[strlen(d)+1];
    strcpy(denumire,d)
}

istream& operator>>(isteream& in,const Tara& obj){


    in>>(oras &)obj1;
    in>>obj.populatie;
    in>>obj.denumire;
    Tara(obj1,obj.populatie,obj.denumire);


    return input;

}


ostream& operator<<(ostream& os,const Tara& obj)
{

    os<<(oras &)obj;
    cout<<obj.denumire<<" "<<obj.populatie<<endl;

    return os;
}



Tara& operator=(const Tara& obj)
{
    nume = obj.getNume();
    populatie=obj.populatie;

    if(denumire=null)
        delete denumire;

    denumire=new char[strlen(obj.denumire)+1];
    strcpy(denumire,obj.denumire);
    return this;
}

int getPopulatie()
{
    return populatie;
}




