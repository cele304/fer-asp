#include <iostream>		//TOCAN
using namespace std;

template <typename T> struct Cvor {
    T vrijednost;
    Cvor<T> *prosli;
    Cvor<T> *sljedeci;
};

template <typename T> class Lista {
    private:
        Cvor<T> *pocetak;
        Cvor<T> *kraj;
        int velicina;
    public:
        Lista() {
            pocetak = NULL;
            kraj = NULL;
            velicina = 0;
        }
        bool upis(T vrijednost) {
            Cvor<T> *novi = new cvor<T>;
            //try { novi= new Cvor<T>;}
            //catch(std::bad_alloc&) { return false;}
            novi->vrijednost = vrijednost;
            novi->sljedeci = NULL;
            if (pocetak == NULL) {
                pocetak = novi;
                kraj = novi;
            } else {
                kraj->sljedeci = novi;
                novi->prosli = kraj;
                kraj = novi;
            }
            velicina++;
            return true;
        }
        void ispis() {
            Cvor<T> *pomocni = pocetak;
            while (pomocni != NULL) {
                cout << pomocni->vrijednost << " ";
                pomocni = pomocni->sljedeci;
            }
            cout << endl;
        }
};

int main(void) {
    Lista<string> lista;
    int n;
    cout << "Upisite velicinu liste > ";
    cin >> n;
    cout << "Upisite elemente liste > " << endl;
    for (int i = 0; i < n; i++) {
        string element;
        cin >> element;
        lista.upis(element);
    }
    lista.ispis();
}
