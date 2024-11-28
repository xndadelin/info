#include <iostream>

using namespace std;
struct nod {
    int info;
    nod *urm;
};

void scrie(nod *a) {
    while(a) {

        if((a -> info) / 100 % 10 % 2 == 0)
            cout << a -> info << " ";

        a = a -> urm;
    }
}

int main()
{
    nod *prim, *nou, *ultim;

    prim = new nod;
    prim -> urm = NULL;

    int n, x;
    cin >> n;

    cin >> x;
    prim -> info = x;
    ultim = prim;

    for(int i = 1; i <= n - 1; ++i) {
        nou = new nod;
        nou -> urm = NULL;

        cin >> x;
        nou -> info = x;
        ultim -> urm = nou;
        ultim = nou;
    }

    scrie(prim);

    return 0;
}
