#include <iostream>
using namespace std;

class A
{
public:
    virtual void display()
    {
        cout << "Base class is invoked" << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "Derived Class is invoked" << endl;
    }
};

int main()
{
    A *a, a_obj;
    B b;

    a = &b;

    a->display();
    a_obj.display();
}