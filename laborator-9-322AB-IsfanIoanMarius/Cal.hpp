#pragma once
#include"Baza.hpp"

class Cal:public Baza
{
    int varsta;
    int greutate;
public:
    Cal();
    Cal(int , int);
    Cal(Cal& );
    ~Cal(){}

    int getV()const;
    int getG()const;
    void afisare();
};
