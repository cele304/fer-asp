#include <iostream>
#include <cmath>
using namespace std;

void f(int polje[], int n, int m){
    if(n == 0)
        return;
    polje[n - 1] = pow(m, (n - 1));
    f(polje, n - 1, m);

}
int main(){
    int n, m, i;
    cout << "Unesite velicinu polja > ";
    cin >> n;
    cout << "Unesite broj > ";
    cin >> m;
    int *polje = new int[n];

    f(polje, n-1, m);
    for(i=0; i<n; ++i){
        cout << polje[i] << " ";
    }
    return 0;
}
