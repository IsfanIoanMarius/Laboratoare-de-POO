#include"Casa.hpp"
#include"Gradina.hpp"

class Casa_cu_gradina:public Casa,public Gradina
{
    char adresa[30];

public:

    Casa_cu_gradina();
    Casa_cu_gradina(const char* ,int,int,int,int,int,char a[]);
    Casa_cu_gradina(Casa_cu_gradina& obj);

    int getP_T();
    void afisare();


};


