/*
 * Wyszukiwanie najmniejszego i największego elementu w tablicy.
 */


#include <iostream>

using namespace std;

void pobierzDane(int tab[], int rozmiar){
    for(int i = 0 ; i<rozmiar ; i++){
        cout << "Podaj liczbę " << i + 1 << ": ";
        cin >> tab[i];
    }
}

int min(int tab[] , int rozmiar){
    int min=tab[0];
    for(int i=1 ; i < rozmiar ;i++){
        if(tab[i]<min)
        min=tab[i];
    }
    return min;
}

int max(int tab[] , int rozmiar){
    int max=tab[0];
    for(int  i=1 ; i < rozmiar ;i++){
        if(tab[i]>max)
        max=tab[i];
    }
    return max;
}

int main(int argc, char **argv)
{
    int rozmiar =0;
    cout << "Ile podasz liczb? ";
    cin >> rozmiar;
    int tab[rozmiar];
	pobierzDane(tab, rozmiar);
    cout << "Minimum: " << min(tab,rozmiar) << endl;
    cout << "Maksimum: " << max(tab,rozmiar) << endl;
    return 0;
}

