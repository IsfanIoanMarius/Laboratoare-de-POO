#ifndef Pui_hpp
#define Pui_hpp

#include"Baza.hpp"

class Pui : public Baza
{
    int varsta;
    int greutate;

public:

    Pui();
    Pui(int, int);
    Pui(Pui& obj);
    ~Pui(){}

    int getV()const;
    int getG()const;
    void afisare();
};

#endif
