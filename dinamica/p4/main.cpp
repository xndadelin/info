#include <iostream>

using namespace std;
struct nod {
    int info;
    nod *urm;
};
void numar(nod *p, int &n) {
    while(p) {
        n++;
        p = p -> urm;
    }
}
int main()
{
    nod *prim, *ultim, *nou;
    prim = new nod;

    int n, x;
    cin >> n;
    cin >> x;

    prim -> info = x;
    prim -> urm = NULL;
    ultim = prim;

    for(int i = 1; i <= n - 1; ++i) {
        nou = new nod;
        cin >> x;
        nou -> info = x;
        nou -> urm = NULL;
        ultim -> urm = nou;
        ultim = nou;
    }

    n = 0;
    numar(prim, n);
    cout << n;

    return 0;
}
