#include "Produse.hpp"
#include <vector>

class Magazin
{
    vector<Produs> vandute;
    vector<Produs> cumparate;

public:

    Magazin();

    void cumpara(const char* d,int ,double);
    void vinde(const char* d,int);

    int cate_cv(const char* d);

};

