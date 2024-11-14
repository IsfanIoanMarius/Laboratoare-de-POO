#include<iostream>
#include<string.h>

using namespace std;

class Locuinta
{
protected:
    char* adresa;
    int valoare;

public:

    Locuinta();
    Locuinta(const char* a,const int val);
    Locuinta(const Locuinta& obj);
    ~Locuinta();

};
