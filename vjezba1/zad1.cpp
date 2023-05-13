#include <iostream>
using namespace std;

void ispis(float polje[], int n) {
    int i;
    for (i=0; i<n; i++) {
        if (polje[i] < 0) {
            cout << polje[i] << endl;
            break;
        }
    }
    if (i<n) {
        ispis(polje + (i+1), n - (i+1));
    }
}

int main() {
    int n, i;
   	cout << "Upisite velicinu polja: ";
  	cin >> n;
    float *p = new float[n];
    for (i=0; i<n; i++) {
        cin >> p[i];
    }
    cout << "[";
    for (i=0; i<n-1; i++) {
        cout << p[i] << ", ";
    }
    cout << p[n-1] << "]" << endl;
    ispis(p, n);
    return 0;
}
