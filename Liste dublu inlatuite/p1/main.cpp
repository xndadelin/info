#include <iostream>

using namespace std;
struct nod {
    int info;
    nod *urm, *prec;
};
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
    while(p) {
        if(p -> info < 0) {
            nou = new nod;
            nou -> info = 0;
            nou -> prec = p;
            nou -> urm = p -> urm;
            p -> urm = nou;
        }
        p = p -> urm;
    }

    while(prim) {
        cout << prim -> info << " ";
        prim = prim -> urm;
    }

    return 0;
}
