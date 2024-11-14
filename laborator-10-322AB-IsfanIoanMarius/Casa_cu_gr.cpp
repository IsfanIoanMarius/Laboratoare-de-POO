#include"Casa_cu_gr.hpp"

Casa_cu_gradina::Casa_cu_gradina():Teren(),Casa(),Gradina()
{
    adresa[0] = '/0';
}

Casa_cu_gradina::Casa_cu_gradina(const char* p ,int prT ,int sC ,int prC ,int sG ,int prG ,char a[]):Teren(p,prT),Casa(p,prT,sC,prC),Gradina(p,prT,sG,prG)
{
    strcpy(adresa,a);
}


Casa_cu_gradina::Casa_cu_gradina(Casa_cu_gradina& obj):Teren( (Teren&) obj),Casa( (Casa&) obj),Gradina( (Gradina&) obj)
{
    strcpy(adresa,obj.adresa);
}


int Casa_cu_gradina::getP_T()
{
    return get_pC() + get_pG() + get_pT();
}


void Casa_cu_gradina::afisare()
{
    Casa::afisare();
    cout<<endl;
    cout<<get_sG()<<" "<<get_pG();
    cout<<endl;
    cout<<adresa;
}
