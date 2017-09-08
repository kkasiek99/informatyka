/*
 *
 *
 *
 */


#include <iostream>

using namespace std;

void licz_znaki(char tab[]){
    int sz1 , sz2, sz3 , sz4;
    sz1=sz2=sz3=sz4=0;
    int i=0;
    while (tab[i] != '\0') {
        switch(tab[i]){
            case ',':
                sz1++;
            break;
            case '.':
                sz2++;
            break;
            case ' ':
                sz3++;
            break;
            default:
                sz4++;
        }
        i++;
    }
    cout << "Liczba ',': " << sz1 << endl;
    cout << "Liczba '.': " << sz2 << endl;
    cout << "Liczba 'spacji': " << sz3 << endl;
    cout << "Liczba 'reszta': " << sz4 << endl;
}

int main(int argc, char **argv)
{
    int rozmiar = 100 ;
    char tab[100];
    cin.getline(tab, rozmiar);
    cout<<tab;
    licz_znaki(tab);
	return 0;
}


