#ifndef Baza_hpp
#define Baza_hpp


#include <iostream>
using namespace std;


class Baza
{
public:

    virtual void afisare() = 0;
    virtual int getV() const = 0;
    virtual int getG() const = 0;
    virtual ~Baza() = 0;
};

#endif
