#include"Locuitor.hpp"

class Oras
{
    Locuitor *locuitori;
    int nr_locuitori;
    char* primar;
public:
    Oras();
    Oras(const Locuitor *loc,const int nr_loc,const char* p);
    Oras(const Oras& obj);
    ~Oras();
    Oras* change_primar(const char* p);
    char* getPrimar()const;
};
