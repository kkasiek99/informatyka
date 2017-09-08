#include <iostream>

using namespace std;

float potega(float n , int pot){
    if (pot==0) return 1;
    return potega(n,pot-1)*n;
}

int main(int argc, char **argv)
{
    int n,pot=0;
    cout << "Podaj liczbę i potęgę";
    cin >> n;
    cin >> pot;
    cout <<"Potęga: " << potega(n,pot) << endl;
    return 0;
}


