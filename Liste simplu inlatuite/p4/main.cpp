#include <iostream>

using namespace std;
struct nod {
    int info;
    nod *urm;
};
void numar(nod *p, int &n) {
    while(p -> urm) {
        n++;
        p = p -> urm;
    }
}
int main()
{
    nod *prim, *ultim, *nou;
    prim = new nod;

    int n, x;
    cin >> x;

    prim -> info = x;
    prim -> urm = NULL;
    ultim = prim;
    if(x != 0) {
        do{
            nou = new nod;
            cin >> x;
            nou -> info = x;
            nou -> urm = NULL;
            ultim -> urm = nou;
            ultim = nou;
        }while(x != 0);
    }
    n = 0;
    numar(prim, n);
    cout << n;

    /*
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
    */
    return 0;
}
