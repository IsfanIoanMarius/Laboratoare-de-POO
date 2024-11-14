#include"Gradina.hpp"

Gradina::Gradina():Teren()
{
    this->suprafata = 0;
    this->pret = 0;
}

Gradina::Gradina(const char* p,int pr1 ,int s,int pr2):Teren(p,pr1)
{
    this->suprafata = s;
    this->pret = pr2;
}

Gradina::Gradina(Gradina& obj):Teren( (Teren&) obj)
{
    this->suprafata = obj.suprafata;
    this->pret = obj.pret;
}


int Gradina::get_sG()
{
    return suprafata;
}

int Gradina::get_pG()
{
    return pret;
}





int Gradina::getP_T()
{
    return getP_T() + pret;
}

void Gradina::afisare()
{
    Teren::afisare();
    cout<<endl;
    cout<<this->suprafata<<" "<<this->pret;
}
