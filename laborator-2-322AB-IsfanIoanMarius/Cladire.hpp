#include <iostream>
#include <cstring>
using namespace std;

class Cladire{

char *proprietar;
char *adresa;
char cod[20];
int vechime;
public:
    Cladire();
    Cladire(const char *p,const char *a,const char c[],int v);
    ~Cladire();
    void afisare();
    void modif(const Cladire & obj);
    void modif(const char *p,const char *a,const char c[],int v);
    int getVechime() const;
    char *getAdresa() const;
};


