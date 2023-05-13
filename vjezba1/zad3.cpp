#include <iostream>
#include <cmath>
using namespace std;

double pi(int n) {
	if (n == 1) {
		return 4;
	}
	return 4*pow(-1, n+1) * (1. / (2*n - 1)) + pi(n-1);
}

int main() {
	int n, i;
	cout << "Upisite velicinu polja > ";
	cin >> n;
	double *p = new double[n];
	for (i=0; i<n; i++) {
		p[i] = pi(i+1);
	}	
	for (i=0; i<n; i++) {
		cout << p[i] << " ";
	}
	return 0;
}
