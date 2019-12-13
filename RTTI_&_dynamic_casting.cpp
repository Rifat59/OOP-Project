#include<iostream>
#include<cmath>
#include<cstring>
#include<typeinfo>

using namespace std; 

class Base
{
public:
    virtual void f(){cout<<"In base.\n";}
};
class Derived : public Base
{
public:
    void f(){cout<<"Inside derived.\n";}
};


int main()
{
    Base *bp,b_ob;
    Derived *dp,d_ob;
    
    dp=dynamic_cast<Derived *>(&d_ob);
    if(dp) dp->f();
    else cout<<"Error.\n";
    
    bp=dynamic_cast<Base *>(&d_ob);
    if(bp) bp->f();
    else cout<<"Error.\n";
    
    bp=dynamic_cast<Base *>(&b_ob);
    if(bp) bp->f();
    else cout<<"Error.\n";
    
    dp=dynamic_cast<Derived *>(&b_ob);
    if(dp) bp->f();
    else cout<<"Error.\n";
    
    bp=&d_ob;
    dp=dynamic_cast<Derived *>(bp);
    if(dp) cout<<"Cast ok.\n";
    else cout<<"Error.\n";
    
    bp=&b_ob;
    dp=dynamic_cast<Derived *>(bp);
    if(dp) cout<<"Cast ok.\n";
    else cout<<"Error.\n";
    
    dp=&d_ob;
    bp=dynamic_cast<Base *>(dp);
    if(bp) cout<<"Cast ok.\n";
    else cout<<"Error.\n";
    
    int i;
    char *p="Hello";
    i=reinterpret_cast<int>(p);
    cout<<i<<endl;
    float f=12.2;
    i=static_cast<int>(f);
    cout<<i;
    
    return 0;
}

