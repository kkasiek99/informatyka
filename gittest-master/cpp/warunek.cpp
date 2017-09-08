/*
 * warunek.cpp
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b = 0 ;
    cout << " Podaj 2 liczby: " ;
    cin >> a >> b;

    if (a > b)
    {
        cout << " A jest większe! " << endl;
        cout << "a > b";
    }
    else if (a < b)
    {
        cout << " B jest większe! " << endl;
        cout << "a < b";
    }
     else //if (a == b)
    {
        cout << " A oraz B są równe! " << endl;
        cout << "a = b";
    }
    return 0;
}
