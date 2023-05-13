#include <iostream>		//TOCAN
using namespace std;

typedef struct {
	int sifra;
	char naziv[50+1];
}Zapis;

template <typename T> 
void swapElements(T &a, T &b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}


void obicanBubbleSort(Zapis A[], int n, char smjer) {
	int i, j;	
	for (i = 0; i < n; i++) {
		for (j = 0; j < (n - i - 1); j++) {
			if (smjer == '0') {
				if (A[j].sifra > A[j + 1].sifra)
					swapElements(A[j], A[j+1]);
			}
			else {
				if (A[j].sifra < A[j + 1].sifra)
					swapElements(A[j], A[j+1]);
			}
		}
	}
}


int main(void) {
    int n;
    cout << "Upisite velicinu > ";
    cin >> n;
    Zapis arr[n];
    for(int i=0; i<n; i++) {
    	cout << "Upisite sifru i naziv jela > ";
        cin >> arr[i].sifra >> arr[i].naziv;
	}
    char s;
    cout << "Upisite smjer > ";
    cin >> s;
    obicanBubbleSort(arr,n,s);
    for (int i=0; i<n; i++)
        cout << arr[i].sifra << " " << arr[i].naziv << endl;
    return 0;
}
