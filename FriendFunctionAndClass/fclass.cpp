#include <iostream>
using namespace std;
class Main
{
private:
    int p_var;

protected:
    int pro_var;

public:
    Main()
    {
        p_var = 10;
        pro_var = 20;
    }
    // declaration of the friend class
    friend class MainsFriend;
};
class MainsFriend
{
public:
    void display(Main &x)
    {
        cout << "value of private variable " << x.p_var << endl;
        cout << "value of protected variable " << x.pro_var << endl;
    }
};

int main()
{
    Main m;
    MainsFriend x;
    x.display(m);
    return 0;
}