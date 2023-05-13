#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

char *ostaviSlova(string ulaz) {
    int br = 0, i;
    for (i=0; i<ulaz.length(); i++) {
        if ((ulaz[i] >= 'a' && ulaz[i] <= 'z') || (ulaz[i] >= 'A' && ulaz[i] <= 'Z')) {
            br++;
        }
    }
    char* noviNiz = new char[br];
    i=0;
    for(i=0; i<ulaz.length(); i++) {
        if ((ulaz[i] >= 'a' && ulaz[i] <= 'z') || (ulaz[i] >= 'A' && ulaz[i] <= 'Z')) {
            noviNiz[i] = i;
            i++;
        }
    }
    return noviNiz;
}

int main() {
    string ulaz = "asp12_i_ASP13";
    char* niz = ostaviSlova(ulaz);
    for(int i = 0; i < strlen(niz); i++) {
        cout << niz[i];
    }
    return 0;
}
