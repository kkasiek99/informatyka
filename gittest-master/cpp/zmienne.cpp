/*
 * Zmienne w C++
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a ; // deklaracja zmiennej
    float b;
    char znak = 'o' ; // deklaracja i inicjacja
    bool wynik = false;

    // a = b = 0; // inicjacja zmiennej
    //b = 0;
/*
    cout << " Podaj liczbę - a ";
    cin >> a;
    cout << " Podaj wartośc - b ";
    cin >> b ;
*/
    cout << a << " " << b << endl;
    cout << "Rozmiar w pamięci różnych typów: " << endl;
    cout << "int\t\t" << sizeof(a) << endl;
    cout << "float\t\t" << sizeof(b) << endl;
    cout << "bool\t\t" << sizeof(wynik) << " " << wynik << endl;
    cout << "char\t\t" << sizeof(znak) << endl;
    return 0;
}
