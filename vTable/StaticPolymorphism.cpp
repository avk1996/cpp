#include <iostream>

class Base
{
public:
    static void print()
    {
        std::cout << "Base::print() called" << std::endl;
    }
};

class Derived : public Base
{
public:
    static void print()
    {
        std::cout << "Derived::print() called" << std::endl;
    }
};

int main()
{
    Base *basePtr = new Derived();
    basePtr->print(); // Output: Derived::print() called

    delete basePtr;
    return 0;
}
