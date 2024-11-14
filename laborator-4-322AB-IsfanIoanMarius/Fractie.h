#include<iostream>

class Fractie
{
    int a;
    int b;
public:
    Fractie(int a=0,int b=0);
    Fractie(const Fractie&);
    Fractie & operator = (const Fractie &);
    double getValoare() const;
    Fractie getInv();
    void setData(int,int);
    float getA();
    float getB();

    friend Fractie operator +(const Fractie &,const Fractie &);
    friend Fractie operator -(const Fractie &,const Fractie &);
    friend Fractie operator *(const Fractie &,const Fractie &);
    friend Fractie operator /(const Fractie &,const Fractie &);

    Fractie & operator += (const Fractie &);
    Fractie & operator -= (const Fractie &);
    Fractie & operator *= (const Fractie &);
    Fractie & operator /= (const Fractie &);

    bool operator ==(const Fractie &);
    bool operator !=(const Fractie &);
    bool operator <(const Fractie &);
    bool operator >(const Fractie &);
    bool operator <=(const Fractie &);
    bool operator >=(const Fractie &);
};
