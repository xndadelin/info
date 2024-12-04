#include <iostream>

using namespace std;
struct nod {
    int info;
    nod *urm, *prec;
};
void Sterge(nod *&prim, nod *ultim, nod *p) {
    nod *primul = prim;
    while(primul -> urm != p && primul != ultim)
        primul = primul -> urm;
    primul -> urm = p -> urm;
}
int main()
{
    nod *prim, *ultim, *nou;
    int n, x;
    cin >> n >> x;
    prim = new nod;
    prim -> info = x;
    prim -> urm = NULL;
    prim -> prec = NULL;
    ultim = prim;

    for(int i = 1; i <= n - 1; ++i) {
        nou = new nod;
        cin >> nou -> info;
        nou -> prec = ultim;
        nou -> urm = NULL;
        ultim -> urm = nou;
        ultim = nou;
    }

    nod *p = prim;
    p = p -> urm -> urm;

    Sterge(prim, ultim, p);


    while(prim) {
        cout << prim -> info << " ";
        prim = prim -> urm;
    }

    return 0;
}
