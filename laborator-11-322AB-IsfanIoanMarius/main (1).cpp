#include "Magazin.hpp"


int main()
{
    Produs p1;
    Produs p2("mere",10,3.4);
    Produs p3(p2);

    p3.add_produse(3);
    cout<<p3.get_NRprod();
    p2.scade_produse(5);
    cout<<p2.get_NRprod();

    cout<<endl;
    cout<<p2.get_Nume();

    Magazin obj;

    obj.cumpara("mere",10,3);
    obj.cumpara("mere",10,3);
    obj.cumpara("pere",12,2.3);
    obj.vinde("pere",2);


}
