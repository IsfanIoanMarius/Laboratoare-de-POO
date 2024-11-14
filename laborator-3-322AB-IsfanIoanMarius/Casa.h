#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

class Casa
{
    char *proprietar;
    char *adresa;
    char index[10];
    int vechime;
public:
    Casa();
    Casa(const char *,const char *,const char [],int);
    Casa(const Casa&);
    ~Casa();
    void afisare();
    void modif(const char *,const char *,const char [],int);
    char* getAdresa ();
    friend int getVechime(const Casa &);
    Casa & operator =(const Casa &);
};
