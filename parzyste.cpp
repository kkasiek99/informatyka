

#include <iostream>
using namespace std;

int parzyste(int k )
{
    int i;
    for (i = 0; i <= k; i+=2)
        cout << i << " " ;
    
    return i/2;
    
    
    }

int main(int argc, char **argv){
{
    int k;
	cout << "Podaj liczbe: ";
    cin >> k;
    cout << "Parzystych: " << parzyste(k);
	return 0;
}
}
