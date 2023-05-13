#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cmath>
using namespace std;

int *nasumicniKvadrati(int polje[], int n){
   	int *p = new int[n];
	bool ind[n] = {};
    for (int i = 0; i < n; i++) {
        int index;
        do {
            index = rand() % n;
        } while (ind[index]);
        p[i] = pow(polje[index], 2);
        ind[index] = true;
    }
    return p;
}
int main(){
    srand(time(NULL));
    int *rez, i, n;
    cout << "Unesite velicinu polja > ";
    cin >> n;

    int *br = new int[n];
    for(i=0; i<n; i++) {
    	cout << "Upisite " << i+1 << ". clan polja > ";
    	cin >> br[i];
	}
    rez=nasumicniKvadrati(br,n);

    for(i=0; i<n; i++)
        cout << rez[i] << " ";
    return 0;
}
