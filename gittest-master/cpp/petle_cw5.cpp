/*
 *
 *zadania z petli 5
 *
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    float m, a, i , n = 0;
    cout << " Podaj liczbę ocen : ";
    cin >> m ;
    for (i = 1; i <= m; i = i+1)
    {
        cout << "Wprowadź ocenę" << endl;
        cin >> a;
        n=a+n;
    }
    cout << "Średnia twoich ocen to: " << n/m;
	return 0;
}
