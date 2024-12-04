#include <iostream>
#include <cstring>
using namespace std;
struct nod{
    char litera;
    nod *prec, *urm;
};
int main()
{
    char *cuvant = new char[21];
    cin >> cuvant;

    nod *prim, *ultim, *nou;
    prim = new nod;
    prim -> litera = cuvant[0];
    prim -> prec = nullptr;
    prim -> urm = nullptr;
    ultim = prim;

    for(int i = 1; i < strlen(cuvant); ++i) {
        nou = new nod;
        nou -> litera = cuvant[i];
        nou -> prec = ultim;
        nou -> urm = NULL;
        ultim = nou;
    }

    while(ultim) {
        cout << ultim -> litera;
        ultim = ultim -> prec;
    }

    return 0;
}
