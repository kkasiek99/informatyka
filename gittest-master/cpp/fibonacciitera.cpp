/*
 * fibonacciitera.cpp
 */


#include <iostream>

using namespace std;

long int fib_rek(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fib_rek(n-1) + fib_rek(n-2);
}

long int fibo(int n ){
    int wynik=0;
    int a=0;
    int b=1;

    for(int i= 0;i<n-1;i++){
    wynik= a+b;
    a=b;
    b=wynik;
    }
    return wynik;
}

int main(int argc, char **argv)
{
    int n = 0;
    cout << "Numer liczby w ciągu: "; cin >> n;
    cout << "Fibonacci iteracyjnie : " << fibo(n)<< endl;
    return 0;
}

