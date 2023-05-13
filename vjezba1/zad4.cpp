#include <iostream>
#include <cmath>
using namespace std;

double exp (double x, int n, int *fakt, double *xpot) {
	if (n == 0)
		return 1;
		
	return *xpot / *fakt + exp(x, n - 1, fakt - 1, xpot - 1);
}

int main() {
	double x;
	int n;
	cin >> x >> n;
	
	int *fakt = new int [n + 1];
	double *xpot = new double [n + 1];
	fakt[0] = 1;
	xpot[0] = 1;
	for (int i = 1; i <= n; i++) {
		fakt[i] = fakt[i - 1] * i;
		xpot[i] = xpot[i - 1] * x;
	}
	
	double *A = new double [n];
	for (int i = 0; i < n; i++) {
		A[i] = exp(x, i, &fakt[i], &xpot[i]);
		cout << A[i] << " ";
	}
	
	return 0;
}
