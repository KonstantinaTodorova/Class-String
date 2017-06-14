#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
    String firstString;
    String secondString;
    cout << "Enter first string:";
    cin >> firstString;
    cout << "Enter second string:";
    cin >> secondString;
    firstString<secondString? cout << "firstString`s size is smaller than secondString":
    cout << "firstString`s size is not smaller than secondString";
    cout << endl;
    firstString>secondString? cout << "firstString`s size is bigger than secondString":
    cout << "firstString`s size is not bigger than secondString";
    cout << endl;
    firstString<=secondString? cout << "firstString`s size is smaller or equal to secondString":
    cout << "firstString`s size is neither smaller nor equal to secondString";
    cout << endl;
    firstString>=secondString? cout << "firstString`s size is bigger or equal to secondString":
    cout << "firstString`s size is neither bigger nor equal to secondString";
    cout << endl;
    firstString==secondString? cout << "firstString is the same as secondString":
    cout << "firstString is not the same as secondString";
    cout << endl;
    firstString!=secondString? cout << "firstString is different from secondString":
    cout << "firstString is not different from secondString";
    cout << endl;
    return 0;
}
