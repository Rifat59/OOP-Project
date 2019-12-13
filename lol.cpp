#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
namespace d ///namespace
{
char p=222;
}
class base
{
public:
    char *ptr1;
    char c=222;
    base()
    {
        ptr1=new char[10];
    }
    virtual void design() {}///Polymorphism use of virtual function
    ~base()
    {
        delete []ptr1;
    }
};
class item : public base///inheritance we can use c from base class to item class
{
    ll cost;
public:
    void design()///Polymorphism
    {
        cout<<d::p<<endl;
    }
};
class lol1 : public base///inheritance we can use c from base class to item class
{
public:
    ll temp;
    void design()///Polymorphism
    {
        for(int i=1; i<=10; i++)
            cout<<c<<endl;
    }
};
void lol()
{
    item p;
    p.design();
    lol1 q;
    q.design();
}
