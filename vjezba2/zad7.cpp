#include <iostream>
using namespace std;

class Red {
	private:
		struct Cvor {
			double element;
			Cvor *next;
		};
		Cvor *head;
		Cvor *tail;
	public:
		Red() : head(NULL), tail(NULL) {};
		bool enqueue(double broj) {
			Cvor *novi = new Cvor;
			novi->element = broj;
			if (!head) {
				head = tail = novi;
				return true;
			}
			tail->next = novi;
			tail=novi;
			return true;
		}
		
		bool dequeue(double *broj) {
			if (!head) 
				return false;
				Cvor *tmp = head;
				*broj = head->element;
				head = head->next;
				return true;
		} 
};

int main(void) {
    double n, k;
    Red q;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> k;
        q.enqueue(k);
    }
    for (int i=0; i<n; i++) {
        q.dequeue(&k);
        cout << k << " ";
    }
    cout << endl;
    return 0;
}
