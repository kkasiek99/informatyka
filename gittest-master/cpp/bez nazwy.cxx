/*
 *
 *zadania z petli 5
 *
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int a , i, n  = 0
    float m = 0
        //n - suma
        //m - srednia
    cout << " Podaj liczbę ocen : ";
    cin >> a ;
    for ( i = 0; i < a ; i+1  ) {
        cout  << i << " ";
        n=n+1
    }
    for ( i=0; 1<a; i=i +1) {
        cout << i << " ";
        m = m/a
    }
        cout << "Średnia ocen to : " << m << endl;


	return 0;
}
