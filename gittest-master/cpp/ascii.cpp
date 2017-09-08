/*
 *
 *
 *
 */


#include <iostream>

using namespace std;

void wypelnij(char tab[], int rozmiar){
    cout << "Podaj liczbę: " << endl;
    for (int i = 0 ; i < rozmiar ; i++){
        cin >> tab[i];}
    }

void druk(char tab[], int rozmiar, bool wstecz){
    cout << "Zwracam " << endl;
    if (wstecz)
        for (int i = rozmiar-1 ; i >= 0 ; i--){
            cout << tab[i] << "  ";}
    }

/*int suma(int tab[], int rozmiar){
    int s=0;
        for (int i = 0 ; i < rozmiar ; i++){
            s += tab[i];

        }
    return s;
}

int min(int tab[], int rozmiar){
    int najmniejsza= tab[0];
    for(int i = 1 ; i < rozmiar ; i++){
        if (tab[i] < najmniejsza)
            najmniejsza = tab[i];
    }
    return najmniejsza;}

int max(int tab[], int rozmiar){
    int max = tab[0];
    for(int i = 1 ; i < rozmiar ; i++){
        if (tab[i] > max)
            max = tab[i];
    }
    return max;}
*/

int drukuj2(char tab[]) {
    int i=0;
    cout << endl;
    while (tab[i] != '\0'){
        cout << tab[i];
        i++;
    };
    return i;
    }

void ascii() {
    for (int i=0; i < 128; i++)
        cout << (char) i ;
}


void zamien(char tab[]){
    int i=0;
    while (tab[i] != '\0'){
        if((int)tab[i] >64 && (int)tab[i] < 91)
            tab[i] = char((int)tab[i] + 32);
        else if((int)tab[i] >89 && (int)tab[i] < 123)
            tab[i] = char((int)tab[i] - 32);
        i++;
    };

}


int main(int argc, char **argv)
{
    int rozmiar = 100 ;
    char tab[100];
    //wypelnij (tab, 10 );
    cin.getline(tab, rozmiar);
    //cout << " Długosć " << drukuj2(tab);
    //ascii();


    drukuj2(tab);
    zamien(tab);
    drukuj2(tab);


    /*cout << "Suma " << suma (tab ,rozmiar) << endl;
    cout << "Min " << min (tab ,rozmiar) << endl;
    cout << "Max " << max (tab ,rozmiar) << endl;
    //cout << tab << endl;
    //cout << tab[0] << endl;
    cout << tab[9] << endl;
*/

	return 0;
}


