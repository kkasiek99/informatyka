/*
 * Wyszukiwanie najmniejszego i największego elementu w tablicy.
 */


#include <iostream>

using namespace std;

long int silnia (int liczba) {
    long int wynik =1;
    for (int i = 1; i<=liczba ; i ++)
       wynik=wynik*i;
    return wynik;
}

long int sil_rek(int liczba){
    if (n==0)
        return 1;
    else
        return sil_rek(n-1)*n;
}


int main(int argc, char **argv)
{
    int rozmiar =0;
    cout << "Podaj liczbę ";
    cin >> liczba;
    cout <<"silnia: " << silnia(liczba) << endl;
    return 0;
}


