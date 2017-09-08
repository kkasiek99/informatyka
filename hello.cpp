
#include <iostream>
#include <string>

using namespace std;

#define ROK_TERAZ 2017
#define ROK_CPP 1983

int main(int argc, char **argv)
{   
    string imie;
    int wiek, rok_urodzenia;
    
    cout << "Cześć! ";
    
    cout << "Podaj imię: ";
    
    cin >> imie;
    
    cout << "Witaj " << imie << endl;
    
    cout << "Bardzo mi miło!" << endl;
    
    cout << "ile masz lat? " << endl;
    
    cin >> wiek;
    rok_urodzenia = ROK_TERAZ - wiek;
    
    cout << "Rok urodzenia: " << 2017 - wiek << endl;
    
    if(rok_urodzenia < ROK_CPP)
        cout << "Jestem starszy od ciebie! " << endl;
    else if(rok_urodzenia > ROK_CPP)
        cout << "Jestem młodszy od ciebie " << endl;
    else
        cout << "mamy tyle samo lat" << endl;

	return 0;
}

