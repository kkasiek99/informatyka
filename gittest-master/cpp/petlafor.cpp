/*
 * petlafor.cpp
 *
 * Copyright 2016 smaster <smaster@atsbox>
 *
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    /*int a = 0;
    cout << " Wprowadż wartość maksymalną : " << endl;
    cin >> a;
    int i = 0; //zmienna iteracyjna
    // (start; warunek ; zmiana)
    for (i = 0; i < a + 1 ; i = i + 1)
        cout << i << " " ;

    int a = 0;
    cout << " Wprowadż wartość maksymalną : " << endl;
    cin >> a;
    int i = 0; //zmienna iteracyjna
    // (start; warunek ; zmiana)
    for (i = 0; i < a + 1 ; i = i + 2)
        cout << i << " " ;

    int a = 0;
    cout << " Wprowadż wartość maksymalną : " << endl;
    cin >> a;
    int i = 0; //zmienna iteracyjna
    // (start; warunek ; zmiana)
    for (i = 0; i < a + 1 ; i = i + 6)
        cout << i << " " ;
 */
 int a = 0;
    cout << " Wprowadż wartość maksymalną : " << endl;
    cin >> a;
    int i = 0;
    for (i = 0; i < a + 1 ; i = (2*i + 2 + 1))
        cout << i << " " ;
    return 0;
}
