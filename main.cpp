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
oid vyezjaet_iz_garaja(Stek**u)
{
    Stek *v=NULL;
    Car x;
    char n[7];
    cout<<("Leaving car:");
    cin>>n;
    while(*u)
    {
        if(Zabiraem(u,x))
        {
            if(strcmp(n, x.num)==0)
            {
                cout<< "Leaved!"<<endl;
                while(Zabiraem(&v, x)) /// возвращаем элементы из стека V в стек U
                    dobavlenie(u, x);
                return;
            }
            else
            {
                dobavlenie(&v, x);
            }
        }
        else break;
    }

    cout <<(" No car")<<n<<endl;

    while(Zabiraem(&v,x))
        dobavlenie (u,x);
}
void Clear(Stek **u)
{
    if(*u == 0) return;
    Stek *p = *u;
    Stek *t;
    while(p)
    {
        t = p;
        p = p->next;
        delete t;
    }
    *u = 0;
}

int main()
{
    Stek *u=NULL;
    int n;
    Car x; //переменная x типа avto
    do{
        cout<<("Choose:")<<endl;
        cout<<(" 1- New car arrived")<<endl;
        cout<<(" 2- Print garage")<<endl;
        cout<<(" 3- Car leave")<<endl;
        cout<<(" 0- Exit")<<endl;
        cout<<("Action: ")<<endl;
        cin>>n;

        switch (n)
        {
        case 1:
            cout<<("Enter the number: ")<<endl;
            vvod(x);
            dobavlenie(&u, x); cout<<("Added!")<<endl; break;
        case 2:
            Print(u); break;
        case 3:
            Print(u);
            vyezjaet_iz_garaja(&u);
            break;
        case 0:
            Clear(&u);
            break;
        default:
            cout<<("The car is not found")<<endl;

        }
        cout<<endl;
    }while (n!=0);
    return 0;
}
"# Laba3" 
"# Laba3" 
