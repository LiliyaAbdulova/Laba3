#include <QCoreApplication>
#include <cstdlib>
#include <cstring>
using namespace std;
struct Car {
    int num;
};
struct Stek
{
    Car a;
    Stek *next;
};
void vvod()
{
    cin>>x.num;
}
void Print()
{
    int k=0;
    Stek *p = u;
    if(p==0)
    {
        cout<<("No cars")<<endl;
        return;
    }
    while(p)
    {
        p->a.num;
        p = p->next;
        k++;
    }
    cout<<("In the garage:")<<endl;
    p = u;
    while(p)
    {
        cout<<"";
        cout << p->a.num<<endl;
        p = p->next;
    }

}
void dobavlenie()
{
    Stek *t=new Stek;
    strcpy(t->a.num,x.num);
    t->next=*u;
    *u=t;
}
bool Zabiraem(Stek**u, Car &x)
{
    if(*u==NULL)
    {
        return false;
    }
    Stek*t=*u;
    strcpy(x.num, t->a.num);
    *u=t->next;
    delete t;
    return true;
}


int main()
{

}
"# Laba3" 
"# Laba3" 
