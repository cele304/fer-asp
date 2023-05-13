#include <iostream>		//TOCAN
#include <ctime>
#include <cstdlib>
#define MAX 10
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
		
		bool pop(int &el) {
			if (vrh < 0)
				return false;
			el = stog[vrh--];
			return true;
		}
		
};

int main() {
	Stog *s = new Stog;
	Stog *temp = new Stog;
	srand(time(NULL));
	int el;
	for (int i=0; i<10; i++) {
		el = rand() % 10 + 1;
		s->push(el);
	}
	while(s->pop(el)) 
		temp->push(el);
	while(temp->pop(el))
		cout << el << endl;
	delete s;
	delete temp;
	return 0;
}
