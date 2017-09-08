/*
 * Czy z danych boków da się stworzyć trójkąt.
 *
 * Copyright 2016 smaster <smaster@atsbox>
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b , c = 0 ;
    cout << " wprowadż 3 liczby będące bokami trójkąta" << endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        cout << " Z tych boków stworzysz trójkąt";
    else
        cout << " Nie da się stworzyć trójkąta z tych boków";






        //if ( c + b >= a )
        //cout << " Z danych boków nie da się stworzyć trójkąta ";

    return 0;
 }
