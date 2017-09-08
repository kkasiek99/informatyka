

#include <iostream>

using namespace std;

long int sil_rek(int n){
    if (n==0)
        return 1;
    else
        return sil_rek(n-1)*n;
}

int main(int argc, char **argv)
{
    int n=0;
    int rozmiar =0;
    cout << "Podaj liczbę ";
    cin >> n;
    cout <<"silnia: " << sil_rek(n) << endl;
    return 0;
}

