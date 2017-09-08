/*
 */


#include <iostream>

using namespace std;

void pobierzDane(int tabwsp[], int stopien){
    cout << "Podaj liczby:"<< endl;
    for(int i = 0 ; i<stopien+1 ; i++){
        cin >> tabwsp[i];
    }
}

float horner_it(int stopien, int tabwsp[], float x){
    int wynik=tabwsp[0];
    for(int i=1; i<=stopien; i++){
    wynik = wynik *x + tabwsp[i];
    }
        return wynik;
}

int main(int argc, char **argv)
{
    int stopien =3;
    int tabwsp[stopien+1];
    float x = 0;
    cout << "Poadj x: ";
    cin >> x;
    pobierzDane(tabwsp,stopien);
    cout << horner_it(stopien,tabwsp,x);
	return 0;
}

