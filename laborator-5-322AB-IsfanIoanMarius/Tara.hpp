#include "Oras.hpp"

class Tara:public Oras
{
private:
    int populatie;
    char *denumire;

public:
    Tara();
    Tara(const char* n,const int p,const char* d):Oras(n){};
    Tara(const Tara& obj):Oras( (Oras&) obj){};
    ~Tara() ;

    int getPopulatie(const Tara& obj);
    void modif(const char* n,const int p,const char* d);

    Tara &operator=(const Tara& obj);

    friend istream& operator >>(isteream& in,const Tara& obj);
    friend ostream& operator<<(ostream& os,const Tara& obj) ;


};
