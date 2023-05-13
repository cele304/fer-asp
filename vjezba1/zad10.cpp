#include <iostream>
using namespace std;

double f(double z, int k){
    double kvad = z*z*-1;
    if (k==0) {
        return z;
    }
    else if (k>0) {
        return (kvad) / ((k+k+1) * (k+k)) * f(z,k-1);
    }


}
int main(){
    int k;
    double z=0.5, rj;
    do {
    	cout << "Upisite broj k > ";
    	cin >> k;
    	rj=f(z,k);
    	cout << rj << endl;
	} while (k != 0);
    
    return 0;
}
