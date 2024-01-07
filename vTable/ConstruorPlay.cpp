#include <iostream>
using namespace std;

class A
{
private:
    int privy;

public:
    A(int x = 10) : privy(x) {}
    A()
    {
        cout << "A constructor" << endl;
    }

    void getter()
    {
        cout << privy << endl;
    }
};
// class B : public A
// {
// public:
//     B()
//     {
//         cout << "B constructor" << endl;
//     }
// };

int main()
{
    A a(10);
    // A x;
    a.getter();
    // B b;
    return 0;
}