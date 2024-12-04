#include <iostream>

using namespace std;
struct nod {
    int info;
    nod *urm;
};
int main()
{
    nod *prim, *ultim, *nou;
    prim = new nod;

    int n, a, r;
    cin >> n >> a >> r;

    prim -> info = a;
    prim -> urm = NULL;
    ultim = prim;

    for(int i = 1; i <= n - 1; ++i) {
        nou = new nod;
        nou -> info = ultim -> info + r;
        nou -> urm = NULL;
        ultim -> urm = nou;
        ultim = nou;
    }

    while(prim) {
        cout << prim -> info << endl;
        prim = prim -> urm;
    }


    return 0;
}
