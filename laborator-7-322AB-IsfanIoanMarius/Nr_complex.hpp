#include<iostream>
#include<cmath>
using namespace std;

class Nr_complex
{
    int a;
    int b;
public:

    Nr_complex();
    Nr_complex(int,int);
    Nr_complex(const Nr_complex &);

    void setdata(int,int);
    float getModul() const;

    bool operator >(const Nr_complex &);

    friend ostream& operator <<(ostream& os , const Nr_complex& obj);
    void afisare();
};

