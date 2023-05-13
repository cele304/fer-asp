#include <iostream>
using namespace std;

class Vozilo {
	public:
		string name;
		int year;
		bool operator < (Vozilo &other) {
			if (name < other.name) 
				return true;
			else if (name > other.name) 
				return false;
			else {
				if (year > other.year) 
					return true;
				else return false;
			}
		}
};

void zamijeni(Vozilo &prvi, Vozilo &drugi) {
	Vozilo tmp;
	tmp = prvi;
	prvi = drugi;
	drugi = tmp;
}

template <typename T> void selectionSort(T A[], int n) {
	Vozilo min;
	int minId;
	for (int i=0; i<n; i++) {
		min = A[i];
		minId = i;
		for (int j=i+1; j<n; j++) {
			if (A[j] < min) {
				min = A[j];
				minId = j;
			}
		}
		zamijeni(A[i], A[minId]);
	}
}

int main() {
	int n;
	cout << "Upisite velicinu > ";
	cin >> n;
	
	Vozilo vozila[n];
	for (int i=0; i<n; i++) {
		cout << "Upisite vozilo i godiste > ";
		cin >> vozila[i].name >> vozila[i].year;
	}
	selectionSort(vozila, n);
	for (int i=0; i<n; i++) {
		cout << vozila[i].name << " " << vozila[i].year << endl;
	}
	return 0;
}
