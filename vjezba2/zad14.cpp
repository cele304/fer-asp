#include <iostream>
#include <string>
using namespace std;

void zamijeni(string *prvi, string *drugi) {
	string tmp;
	tmp = *prvi;
	*prvi = *drugi;
	*drugi = tmp;
}

void bubbleSortPoboljsani(string A[], int n, char smjer) {
	bool swap = true;
	for (int i=0; i<n, swap==true; i++) {
		swap = false;
		for (int j=0; j<(n-i-1); j++) {
			if (smjer == '0') {
				if (A[j] > A[j+1])	
					zamijeni(&A[j], &A[j+1]);
					swap = true;
			} else {
				if (A[j+1] > A[j])	
					zamijeni(&A[j], &A[j+1]);
					swap = true;
			}
		}
	}
}

int main() {
	string *A = new string[10];
	for (int i=0; i<10; i++) {
		string s;
		cin >> s;
		A[i] = s;
	}
	char smjer;
	cout << "Upisite smjer sortiranja > ";
	cin >> smjer;
	bubbleSortPoboljsani(A, 10, smjer);
	for (int i=0; i<10; i++) {
		cout << A[i] << " ";
	}
	return 0;
}
