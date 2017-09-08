/*
 * zadaniazpetlami.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{ int a,b = 0;
    do{
        cout << " Podaj liczbę: ";
        cin >> a;
        b += a;
        cout << "Suma: " << b << endl;

    }while (b<=75);
	return 0;
}
