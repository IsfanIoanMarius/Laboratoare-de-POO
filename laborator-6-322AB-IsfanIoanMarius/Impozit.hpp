#include<iostream>

using namespace std;

class Impozit
{
protected:
    int *taxe;
    int nr_taxe;
public:

    Impozit();
    Impozit(const int *t,const int nr_t);
    Impozit(const Impozit & obj);
    ~Impozit();
    int getSumaTot()const;
};
