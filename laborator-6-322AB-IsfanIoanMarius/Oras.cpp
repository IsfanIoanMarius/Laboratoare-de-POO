#include"Oras.hpp"

Oras::Oras()
{
    locuitori = NULL;
    nr_locuitori = 0;
    primar = NULL;
}

Oras::Oras(const Locuitor *loc,const int nr_loc,const char* p)
{
    nr_locuitori = nr_loc;

    locuitori = new Locuitor[nr_locuitori];

    for( int i=0 ; i < nr_locuitori ; i++ )
        locuitori[i] = loc[i];

    primar = new char[strlen(p)+1];
    strcpy(primar,p);
}

Oras::Oras(const Oras& obj)
{
    nr_locuitori = obj.nr_locuitori;

    locuitori = new Locuitor[nr_locuitori];

    for( int i=0 ; i < nr_locuitori ; i++ )
        locuitori[i] = obj.locuitori[i];

    primar = new char[strlen(obj.primar)+1];
    strcpy(primar,obj.primar);
}

Oras::~Oras()
{
    if(locuitori != NULL)
        delete(locuitori);
    if(primar != NULL)
        delete(primar);
}


Oras* Oras::change_primar(const char* p)
{
    delete(primar);
    primar = new char[strlen(p)+1];
    strcpy(primar,p);
    return this;
}


namespace cerinta3
{
    Locuitor aux;
}

char* Oras :: getPrimar()const
{
    return primar;
}










