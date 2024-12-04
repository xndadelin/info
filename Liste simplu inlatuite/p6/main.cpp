#include <iostream>
#include <cstring>
using namespace std;

struct nod {
    char *info;
    nod *urm;
};

void creare(nod *&prim) {
    nod *ultim, *nou;
    char *sir = new char[1001];
    cin.getline(sir, 1000);
    char *info = strtok(sir, ", ");

    if (!info) return;

    prim = new nod;
    prim -> info = new char[strlen(info) + 1];
    strcpy(prim -> info, info);
    prim -> urm = NULL;
    ultim = prim;

    info = strtok(NULL, ", ");

    while (info) {
        nou = new nod;
        nou -> info = new char[strlen(info) + 1];
        strcpy(nou -> info, info);
        nou -> urm = NULL;
        ultim -> urm = nou;
        ultim = nou;
        info = strtok(NULL, ", ");
    }
}

nod* cautare(nod* prim, const char *x) {
    while (prim) {
        if (!strcmp(prim->info, x)) {
            return prim;
        }
        prim = prim->urm;
    }
    return NULL;
}

int main() {
    nod *prim = NULL;
    creare(prim);

    char x[31];
    cin.getline(x, 30);

    nod* gasit = cautare(prim, x);

    if (gasit) {
        cout << "Cuvantul " << x << " a fost gasit in lista";
    } else {
        cout << "Cuvantul " << x << " nu a fost gasit in lista";
    }

    return 0;
}
