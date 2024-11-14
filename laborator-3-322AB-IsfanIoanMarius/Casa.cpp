#include"Casa.h"

Casa::Casa()
{
    proprietar=NULL;
    adresa = NULL;
    index[0] = '\0';
    vechime = 0;
}

Casa::Casa(const char *p,const char *a,const char i[],int v)
{

    proprietar = new char[strlen(p)+1];
    strcpy(proprietar,p);


    adresa = new char[strlen(a)+1];
    strcpy(adresa,a);

    strcpy(index,i);


    vechime = v;
}

Casa::Casa(const Casa &obj)
{

    proprietar = new char[strlen(obj.proprietar)+1];
    strcpy(proprietar,obj.proprietar);


    adresa = new char[strlen(obj.adresa)+1];
    strcpy(adresa,obj.adresa);

    strcpy(index,obj.index);


    vechime = obj.vechime;
}

Casa::~Casa()
{
    if(proprietar!=NULL)
        delete []proprietar;
    if(adresa!=NULL)
        delete []adresa;
    cout<<"DESCTR"<<endl;
}

void Casa::afisare()
{
    if(proprietar == NULL)
        cout<<"Nu existta un proprietar"<<endl;
    else
        cout<<"Proprietarul casei este:"<<proprietar<<endl;


    if(adresa == NULL)
        cout<<"Nu este cunoscuta adresa"<<endl;
    else
        cout<<"Adresa casei este:"<<adresa<<endl;


    if(index[0] == '\0')
        cout<<"Nu este cunoscut index-ul"<<endl;
    else
        cout<<"Index-ul casei este:"<<index<<endl;


    cout<<"Vechimea casei este de "<<vechime<<" ani"<<endl;

    cout<<endl;
}

void Casa::modif(const char *p,const char *a,const char i[],int v)
{
    if(proprietar!=NULL)
        delete []proprietar;
    proprietar = new  char[strlen(p)+1];
    strcpy(proprietar,p);

    if(adresa!=NULL)
        delete []adresa;
    adresa = new char[strlen(a)+1];
    strcpy(adresa,a);

    strcpy(index,i);


    vechime = v;
}

char* Casa::getAdresa()
{
    return adresa;
}

int getVechime(const Casa & a)
{
    return a.vechime;
}

Casa & Casa::operator=(const Casa &obj)
{
    if(this->proprietar!=NULL)
        delete []this->proprietar;
    this->proprietar = new char[strlen(obj.proprietar)+1];
    strcpy(this->proprietar,obj.proprietar);

    if(this->adresa!=NULL)
        delete []adresa;
    this->adresa = new char[strlen(obj.adresa)+1];
    strcpy(this->adresa,obj.adresa);

    strcpy(this->index,obj.index);


    this->vechime = obj.vechime;

    return *this;
}


