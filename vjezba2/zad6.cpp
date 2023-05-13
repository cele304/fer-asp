#include <iostream>		//TOCAN
#define MAX 10
using namespace std;

class Red {
	private:
		double queue[MAX];
		int read=0;
		int write=0;
	public:
		bool enqueue(double broj) {
			if (write == MAX) {
				return false;
			}
			queue[write++] = broj;
			return true;
		}
		bool dequeue(double &broj) {
			if (read == write) {
				return false;
			}
			broj = queue[read++];
			return true;
		}
};

int main() {
	Red q;
	int i, n;
	double el;
	cout << "Upisite n > ";
	cin >> n;
	for (i=1; i<=n; i++) {
		cout << "Upisite " << i << ". element > "; 
		cin >> el;
		q.enqueue(el);
	}
	for (i=1; i<=n; i++) {
		q.dequeue(el);
		cout << i << ". element > " << el << endl;
	}
	return 0;
}
