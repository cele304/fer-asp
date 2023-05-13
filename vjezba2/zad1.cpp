#include <iostream>		//TOCAN
using namespace std;

template <typename T> struct cvor {
    T element;
    cvor<T> *sljedeci;
};

template <typename T> class Lista {
    private:
        cvor<T> *glava;
    public:
        Lista() {
            glava = NULL;
        }
        bool upis(T element) {
            cvor<T> *novi = new cvor<T>;
            //try {novi = new cvor<T>;}
            //catch (std::bad_alloc&) {return false;}
            novi->element = element;
            novi->sljedeci = NULL;
            if (glava == NULL) {
                glava = novi;
                return true;
            }
            cvor<T> *pomocni = glava;
            if (pomocni->element > element) {
                novi->sljedeci = pomocni;
                glava = novi;
                return true;
            }
            while (pomocni->sljedeci != NULL) {
                if (pomocni->sljedeci->element > element) {
                    novi->sljedeci = pomocni->sljedeci;
                    pomocni->sljedeci = novi;
                    return true;
                }
                pomocni = pomocni->sljedeci;
            }
            pomocni->sljedeci = novi;
            return true;
        }
        void ispis() {
            cvor<T> *pomocni = glava;
            while (pomocni != NULL) {
                cout << pomocni->element << " ";
                pomocni = pomocni->sljedeci;
            }
            cout << endl;
        }
};

int main(void) {
    Lista<int> lista;
    int n;
    cout << "Upisite velicinu liste > ";
    cin >> n;
    cout << "Upisite elemente liste > " << endl;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        lista.upis(element);
    }
    lista.ispis();
}
