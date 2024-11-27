#include <iostream>

using namespace std;
struct nod {
    int x, y;
    nod *urm;
};

int cnt(nod *a) {
    int ox = 0;
    while(a) {
        if(!(a -> y)) ox++;
        a = a -> urm;
    }
    return ox;
}

int main()
{
    nod *prim, *ultim, *nou;
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    prim = new nod;
    prim -> urm = NULL;
    prim -> x = x;
    prim -> y = y;

    ultim = prim;

    for(int i = 1; i <= n - 1; ++i) {

        nou = new nod;
        nou -> urm = NULL;
        cin >> x >> y;

        nou -> x = x;
        nou -> y = y;

        ultim -> urm = nou;
        ultim = nou;
    }

    cout << cnt(prim);

    return 0;
}
