#include <iostream>		//TOCAN
using namespace std;

typedef struct {
	int pb;
	char mjesto[40+1];
}Zapis;


void insertionSort(Zapis A[], int n, char smjer) {
	int i,j;
	Zapis pom;
	for (i=1; i<n; i++) {
		pom = A[i];
		for (j=i; j>=1; j--) {
			if (!(smjer) && A[j-1].pb <= pom.pb) 
				break;
			else if (smjer && A[j-1].pb >= pom.pb) 
				break;
			A[j] = A[j-1];
		}
		A[j] = pom;
	}
}

int main() {
	int n;
	cout << "Upisite n > ";
	cin >> n;
	Zapis z[n];
	int i=0,j,s;
	do {
		cout << "Upisi postanski broj i mjesto > ";
		cin >> z[i].pb >> z[i].mjesto;
		i++;
	} while(i<n);
	cout << "0 uzlazno ili 1 silazno > ";
	cin >> s;
	insertionSort(z, n, s);
	for (i=0; i<n; i++) {
		cout << z[i].pb << " " << z[i].mjesto << endl;
	}
	return 0;
}
