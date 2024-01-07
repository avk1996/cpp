#include <iostream>
using namespace std;

/*
For Base Class:
Here we have 3 function in a base class
*/
class Base
{
public:
    virtual void function1()
    {
        cout << "In Base function1()" << endl;
    }
    virtual void function2()
    {
        cout << "In Base function2()" << endl;
    }
    virtual void function3()
    {
        cout << "In Base function3()" << endl;
    }
};
class Derived1 : public Base
{
public:
    void function1()
    {
        cout << "Derived1 function1()" << endl;
    }
};
class Derived2 : public Derived1
{
public:
    void function2()
    {
        cout << "Derived2 function2()" << endl;
    }
};

// main function
int main()
{
    // defining base class pointer
    Base *bp = new Base();
    Base *bp2Der1 = new Derived1();
    Base *bp2Der2 = new Derived2();

    // calling all functions
    bp->function1();
    bp->function2();
    bp->function3();
    cout << endl;
    bp2Der1->function1();
    bp2Der1->function2();
    bp2Der1->function3();

    bp2Der2->function1();
    bp2Der2->function2();
    bp2Der2->function3();

    // deleting objects
    delete bp;
    delete bp2Der1;
    delete bp2Der2;

    return 0;
}