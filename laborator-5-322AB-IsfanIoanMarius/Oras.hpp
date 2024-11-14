#include <iostream>
#include <cstring>

using namespace std;


class Oras{

 protected:
     char *nume;

 public:
    Oras();
    Oras(const char* n);
    Oras(const Oras& obj);
    ~Oras();

    char* getNume() const;
    void modif(const char* n);
    Oras& operator=(const Oras &obj);


};

