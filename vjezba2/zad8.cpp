#include <iostream>		//TOCAN
#include <ctime>
#include <cstdlib>
using namespace std;

class Red {
	private:
		struct Cvor {
			double broj;
			Cvor *next;
		};
		Cvor *read = NULL;
		Cvor *write = NULL;
	public:
		bool enqueue(double broj) {
			Cvor *newCvor = new (nothrow) Cvor;
			if (newCvor == NULL) {
				return false;
			}
			newCvor -> broj = broj;
			newCvor -> next = NULL;
			if (write == NULL) {
				return newCvor;
			} else {
				write->next = newCvor;
			}
			write = newCvor;
			return true;
		}
		
		bool poljeURed(int polje[], int n) {
			if (n == 0) {
				cout << endl << "Svi elementi polja dodani su u red";
				return true;
			}
			if (!enqueue(polje[n-1])) {
				cout << "Dodavanje nije uspjelo" << endl;
				return false;
			}
			return poljeURed(polje, n-1);
		}
};


int main() {
	srand(time(NULL));
	static const int MAX = 10;
	int polje[MAX], i;
	for (i=1; i<=MAX; i++) {
		polje[i] = rand() % 10 + 1;
		cout << polje[i] << " ";
	}
	Red r;
	r.poljeURed(polje, MAX);
	return 0;
}
