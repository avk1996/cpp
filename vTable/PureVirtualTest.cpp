#include <iostream>
using namespace std;

/*
For Base Class:
Here we have 3 function virtual in a base class and 1 pure virtual
One pure virtual function makes the whole class abstract
Result: 1. we cannot instantiate this class
        2. whichever class derives from this base class has to implements its pure virtual methods.
        3. It is not mandatory to implement JUST virtual functions in derived class.
*/
class Base
{
public:
    // impure virtual function
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
    // PURE VIRTUAL FUNCTION
    virtual void function4() = 0;
};
class Derived1 : public Base
{
public:
    void function1()
    {
        cout << "Derived1 function1()" << endl;
    }
    void function4()
    {
        cout << "Derived1 pure virtual function4()" << endl;
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
    // Base *bp = new Base();
    Base *bp2Der1 = new Derived1();
    Base *bp2Der2 = new Derived2();

    // calling all functions
    // bp->function1();
    // bp->function2();
    // bp->function3();
    cout << endl;
    bp2Der1->function1();
    bp2Der1->function2();
    bp2Der1->function3();
    cout << endl;
    bp2Der2->function1();
    bp2Der2->function2();
    bp2Der2->function3();

    // deleting objects
    // delete bp;
    delete bp2Der1;
    delete bp2Der2;

    return 0;
}