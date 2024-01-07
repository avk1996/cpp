#include <iostream>
using namespace std;
int main(void)
{
    try
    {
        int age;
        cout << "Enter your age: ";
        cin >> age;
        if (age < 18)
        {
            throw(age);
        }
        else
        {
            cout << "Age is Valid for drinking" << endl;
        }
    }
    catch (int age)
    {
        cout << "Invalid Age. You are not eligible to drink alcohol." << endl;
    }
}