


#include <iostream>
using namespace std;
int main(int argc, char **argv)
 { float a,b = 0;
    cout << "Podaj dzielną "; cin >> a;
    // petla for kiedy wiemy ile razy ma się coś powtórzyć
    do { // wiemy że pętla wykona sie przynajmniej raz
        cout << "Podaj dzielnik "; cin >> b;
        if ( b == 0 )
            cout << "Błędne dane !" << endl;
    }while (b ==0);


    //while (b == 0){ //nie wiadomo ile razy wykon asię pętla
    //cout << "błędne dane ! ";
    //cout << " Podaj prawidlowy dzielnik !" ; cin >> b ;
    //}
    cout << "Wynik dzielenia " << a/b ;
    return 0;
 }
