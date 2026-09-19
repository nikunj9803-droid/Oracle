#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun()
    {
        cout << "base"<<endl;
    }
};

class derived1 : public base
{
public:
    void fun()
    {
        cout << "derived1";
    }
};

class derived2 : public base
{
public:
    void fun()
    {
        cout << "derived2";
    }
};

int main()
{
    derived1 d1;
    base *bptr = &d1;
    bptr->fun();

    derived2 d2;
    bptr = &d2;
    bptr->fun();
}