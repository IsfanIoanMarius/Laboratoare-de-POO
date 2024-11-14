#include <iostream>
#include <string.h>

using namespace std;

class Produs
{
    char* denumire;
    int nr_prod;
    double pret;

public:

    Produs();
    Produs(const char* , int , double);
    Produs(const Produs& obj);
    ~Produs();

    int get_NRprod();
    char* get_Nume();
    void add_produse(int);
    void scade_produse(int);

};
