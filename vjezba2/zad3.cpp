#include <iostream>		//TOCAN
#include <ctime>
#include <cstdlib>
#define MAX 100
using namespace std;

class Stog {
	private:
		int stog[MAX];
		int vrh=-1;
	public:
		bool push(int el) {
			if (vrh >= (MAX-1)) 
				return false;
			stog[++vrh] = el;
			return true;
		}
		
		void ispis() {
			for (int i=MAX; i>=0; i--) {
				cout << MAX-i+1 << "." << stog[i] << " " << endl;
			}
		}
};

int main() {
	Stog *s = new Stog;
	srand(time(NULL));
	for (int i=0; i<101; i++) {
		int el = rand();
		s->push(el);
	}
	s->ispis();
	delete s;
	return 0;
}
