/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int euk(int a, int b){
    if (a==b) return a;
    if (a>b) return euk(a-b,b);
    if (b>a) return euk(a,b-a);
}

int nwd1 (int a , int b ){
    int p =0;
    while (a != b){
        if (a > b)
            a = a - b;
        else b = b -  a;
        p++;
    }
    cout << "Powtórzeń : " << p << endl;
    return a;
}

int nwd2 (int a , int b ){
    int p=0;
    while (a>0) {
        a = a % b;
        b = b - a;
        cout << "NWD to : " << b;
        p++;
    }
    cout << "Powtórzeń : " << p << endl;
    return b ;
}

int main(int argc, char **argv)
{
    int a , b = 0 ;
    cout << "Podaj liczby a i b :" << endl;
    cin >> a;
    cin >> b;
    cout << "Klasycznie : " << nwd1(a,b) << endl;
    cout << "Optymalnie : " << nwd2(a,b) << endl;
    cout << "Rekurencyjnie :" << euk(a,b) << endl;
	return 0;
}

