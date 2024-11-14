#include<iostream>
using namespace std;

class Fractie
{
    int a;
    int b;
public:

    Fractie();
    Fractie(int,int);
    Fractie(const Fractie&);

    double getValoare() const;
    void setData(int,int);

    bool operator >(const Fractie &);

    friend ostream& operator<<(ostream& os, const Fractie& obj);


    void afisare();
};

