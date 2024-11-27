#include <iostream>
#include <cstring>
using namespace std;

struct nod {
    char *cuvant;
    nod *urm;
};

void creare(nod *&prim) {
    nod *ultim, *nou;
    char sir[1001];
    cin.getline(sir, 1000);
    char *cuvant = strtok(sir, ", ");

    if (!cuvant) return;

    prim = new nod;
    prim -> cuvant = new char[strlen(cuvant) + 1];
    strcpy(prim->cuvant, cuvant);
    prim -> urm = NULL;
    ultim = prim;

    cuvant = strtok(NULL, ", ");

    while (cuvant) {
        nou = new nod;
        nou -> cuvant = new char[strlen(cuvant) + 1];
        strcpy(nou -> cuvant, cuvant);
        nou -> urm = NULL;
        ultim -> urm = nou;
        ultim = nou;
        cuvant = strtok(NULL, ", ");
    }
}

void cautare(nod *prim, const char *x) {
    while (prim) {
        if (!strcmp(prim -> cuvant, x)) {
            cout << "Cuvantul " << x << " a fost gasit in lista\n";
            return;
        }
        prim = prim -> urm;
    }
    cout << "Cuvantul " << x << " nu a fost gasit in lista\n";
}

int main() {
    nod *prim = NULL;
    creare(prim);

    char x[31];
    cin.getline(x, 30);

    cautare(prim, x);

    return 0;
}
