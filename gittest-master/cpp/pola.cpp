
/*
 * Program liczący pola trójkąta i kwadratu
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    float a , b , c , d , e , f;
    a = b = c = e = f = 0;
    d = 2;
    cout << "WITAJ ! ";
    cout << "Podaj podaj długość 1 boku trójkąta ( jego podstawy )";
    cin >> a ;
    cout << "Podaj podaj długość 2 boku trójkąta ( jego wysokości )";
    cin >> b ;
    cout << "Podaj podaj długość 3 boku trójkąta";
    cin >> c ;
    cout << " * Obwód tego trójkąta to " << " " << a+b+c << endl;
    cout << " * Pole tego trójkąta to " << " " << a*b/d << endl;
    cout << " Teraz podaj długość 1 boku prostokąta ";
    cin >> e ;
    cout << " Teraz podaj długość 2 boku prostokąta ";
    cin >> f ;
    cout << " * Obwód tego prostokąta to " << " " << 2*e+2*f << endl;
    cout << " * Pole tego prostokąta to " << " " << e*f << endl;

    }
