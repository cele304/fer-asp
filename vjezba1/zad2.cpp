#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int zbrojiKvadrate(int polje[], int n) {
	if (n < 0) {
		return 0;
	}
	int s = sqrt(polje[n-1]);
	if (pow(s,2) == polje[n-1]) {
		return zbrojiKvadrate(polje, n-1) + polje[n-1];
	} else {
		return zbrojiKvadrate(polje, n-1);
	}
}

int main() {
	int n, i;
	cout << "Upisite velicinu polja > ";
	cin >> n;
	int *p = new int[n];
	srand(time(NULL));
	
	for (i=0; i<n; i++) {
		p[i] = rand() % 100 + 1;
	}
	
	cout <<"[";
	for (i=0; i<n-1; i++) {
		cout << p[i] << ", ";
	}
	cout << p[n-1] << "]" << endl;
	cout << "Zbroj kvadrata > " << zbrojiKvadrate(p, n);
	return 0;
}
