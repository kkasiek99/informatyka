/*
 * kalkulator.cpp
 */


#include <iostream>

using namespace std;

void dod (int a , int b){
    cout << "Wynik : " << a+b << endl;}
void odej (int a , int b){
    cout << "Wynik : " << a-b << endl;}
void dziel (double a , double b){
    if ( b!= 0){
        cout << "Wynik " << a / b << endl;}
    else
        cout << "Nie można dzielić przez zero!" << endl;}
void mnoz (int a , int b){
    cout << "Wynik : " << a*b << endl;}

int main(int argc, char **argv)
{
    int a , b , i , ilosc;
    char x;
    cout << "Podaj ilość działań: " ;
    cin >> ilosc;
    for (i = 0 ; i < ilosc; i++){
        cout << "Podaj liczbę a: " ;
        cin >> a;
        cout << "Podaj liczbę b: " ;
        cin >> b;
        cout << "Podaj znak działania: ";
        cin >> x;
        switch(x){
            case '+':
                dod(a,b);
            break;
            case '-':
                odej(a,b);
            break;
            case '*':
                mnoz (a,b);
            break;
            case '/':
                dziel (a,b);
            break;
        }
    }
    return 0;
}

