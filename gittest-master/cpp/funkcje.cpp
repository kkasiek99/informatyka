




#include <iostream>
using namespace std;

int licznik = 0;

void sumuj(float a , float b)
    {
    float suma = a + b ;
    cout << "Suma " << suma << endl;
    a = a+ 100;
    b = 0;
    cout << "Licznik (sumuj): " << licznik << endl;
    }

float suma(float a , float b)
    {
    float suma = a + b ;
    return suma;
    }

void sumujR(float &a , float &b)
    {
    float suma = a + b ;
    cout << "Suma " << suma << endl;
    a = a+ 100;
    b = 0;
    cout << "Licznik (sumuj): " << licznik++ << endl;
    }

int main(int argc, char **argv)
{
    int a,b=0;

    cout << "Podaj 2 liczby" << endl;
    cin >> a >> b;

    cout << "Suma: " << suma (a,b) << endl;

    //sumujR(a,b);
    //cout << "a : " << a << " b : " << b << endl;
    //cout << "Licznik (main): " << ++licznik <<endl;
    return 0;
}
