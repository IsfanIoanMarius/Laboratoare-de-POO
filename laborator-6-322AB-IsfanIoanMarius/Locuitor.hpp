#include"Impozit.hpp"
#include"Locuinta.hpp"

class Locuitor:public Impozit,public Locuinta
{
    char* nume;
public:
    Locuitor();
    Locuitor(const int *t,const int nr_t,const char* a,const int val,const char* n);
    Locuitor(const Locuitor & obj);
    ~Locuitor();
    Locuitor & operator= (const Locuitor& obj);

    int getValoare()const;
    int getNR()const;
};
