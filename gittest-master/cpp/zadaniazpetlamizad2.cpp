/*
 * zadaniazpetlamizad2.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{ int m,n,i = 0;
    cout << " Wprowadż wartość minimalną : " << endl;
    cin >> m;
    cout << " Wprowadż wartość maksymalną : " << endl;
    cin >> n;
    for (i=m; i < n+1; i = m+1){
        cout << i << " " ;
        m=i ;
    }
	return 0;
}
