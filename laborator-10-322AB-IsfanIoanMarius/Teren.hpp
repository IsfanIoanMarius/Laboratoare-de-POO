#pragma once

#include<iostream>
#include<string.h>

using namespace std;

class Teren
{
    char *proprietar;
    int pret;

public:

    Teren();
    Teren(const char* , int);
    Teren(Teren& obj);
    ~Teren();

    int get_pT();

    virtual int getP_T();
    virtual void afisare();

};

