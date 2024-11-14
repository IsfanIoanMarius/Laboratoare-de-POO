#include"Casa.hpp"

Casa::Casa():Teren()
{
    this->suprafata = 0;
    this->pret = 0;
}

Casa::Casa(const char* p,int pr1 ,int s,int pr2):Teren(p,pr1)
{
    this->suprafata = s;
    this->pret = pr2;
}

Casa::Casa(Casa& obj):Teren( (Teren&) obj)
{
    this->suprafata = obj.suprafata;
    this->pret = obj.pret;
}

int Casa::get_pC()
{
    return pret;
}

int Casa::get_sC()
{
    return suprafata;
}

int Casa::getP_T()
{
    return getP_T() + pret;
}

void Casa::afisare()
{
    Teren::afisare();
    cout<<endl;
    cout<<this->suprafata<<" "<<this->pret;
}
