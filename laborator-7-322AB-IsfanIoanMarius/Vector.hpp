#include<iostream>
using namespace std;

template<class X>
class Vector
{
    int dim;
    X *buf;

public:

    Vector();
    Vector(int d,X *b);
    Vector(Vector &obj);
    ~Vector();

    void afisare();
};

