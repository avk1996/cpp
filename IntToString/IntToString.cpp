#include <iostream>

#include <sstream> // header file for stringstream

using namespace std;

int main()

{

    // initialize an integer

    int num = 20;

    // applying the stringstream class

    // declare a stream object

    stringstream stream;

    stream << num;

    // initializing a string

    string str;

    stream >> str;

    cout << "\n"

         << "Value of num is : " << num << "\n";

    cout << "String representation of the num after applying stringstream is : " << str;

    return 0;
}