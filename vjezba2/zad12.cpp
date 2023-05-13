#include <iostream>
using namespace std;

class Osoba {
	public:
		string ime;
		int age;
		bool operator < (Osoba &other) {
			if (age < other.age) 
				return true;
			else if (age > other.age) 
				return false;
			else {
				if (ime.compare(other.ime) < 0) 
					return true;
				else return false;
			}
		}
};

template <typename T> void insertionSort(T A[], int n) {
	Osoba tmp;
	int i,j;
	for (i=1; i<n; i++) {
		j=i;
		while (A[j] < A[j-1] && j>0) {
			tmp = A[j];
			A[j] = A[j-1];
			A[j-1] = tmp;
			j--;
		}
	}
}

int main() {
	int n;
	cout << "Upisite broj osoba > ";
	cin >> n;
	
	Osoba osobe[n];
	for (int i=0; i<n; i++) {
		cout << "Upisite ime osobe i godine > ";
		cin >> osobe[i].ime >> osobe[i].age;
	}
	insertionSort(osobe, n);
	for (int i=0; i<n; i++) {
		cout << osobe[i].ime << " " << osobe[i].age << endl;
	}
	return 0;
}
