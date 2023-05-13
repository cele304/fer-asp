#include <iostream>		//TOCAN
#include <ctime>
#include <cstdlib>
#define MAX 100
using namespace std;

class Stog {
	private:
		struct StogEl {
			int el;
			StogEl *next;
		};
		StogEl *head = NULL;
	public:
		bool push(int el) {
			StogEl *newEl = new (nothrow) StogEl;
			if (newEl == NULL) {
				return false;
			}
			newEl->el = el;
			newEl->next = head;
			head = newEl;
			return true;
		}
		
		void ispis() {
			StogEl *curr;
			int i;
			for (curr=head, i=0; curr!=NULL && i<101; curr=curr->next , i++)  {
				cout <<i+1 <<"." << curr->el << endl;
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
