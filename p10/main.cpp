#include <iostream>
#include <cstring>
using namespace std;

struct nod {
    char *cuvant;
    nod *urm;
};

int main() {
    nod *prim = nullptr, *ultim = nullptr, *nou;
    char cuvant[21];
    int n;
    cin >> n;
    while (n) {
        cin >> cuvant;
        nou = new nod;
        nou->cuvant = new char[strlen(cuvant) + 1];
        strcpy(nou->cuvant, cuvant);
        nou->urm = nullptr;

        if (prim == nullptr) {
            prim = nou;
        } else {
            ultim->urm = nou;
        }
        ultim = nou;

        n--;
    }

    nod *current = prim;
    while (current != nullptr) {
        cout << current->cuvant << " ";
        current = current->urm;
    }


    return 0;
}
