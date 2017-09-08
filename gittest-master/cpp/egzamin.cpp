/*
 * egzamin.cpp
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{  int a = 0 ;
    cout << " Wprowadż wynik testu : " << endl;
    cin >> a;
    if ( a > -1 && a <= 30 )
        cout << " Przydzielono cię do grupy początkującej.";
    else if ( a > 30 && a < 60 )
        cout << " Przydzielono cię do grupy podstawowej.";
    else if ( a >= 60 && a <= 100 )
        cout << " Przydzielono cię do grupy zaawansowanej.";
    else
        cout << " Podałeś niepoprawny wynik";
    //else if ( a < 0 )
       // cout << " Podałeś niepoprawny wynik ! ";
    //else if ( a > 100 )
       // cout << " Podałeś niepoprawny wynik ! ";

	return 0;
}
