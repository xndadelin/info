#include <iostream>

using namespace std;
struct nod {
    int info;
    nod *adr;
};

int S1(nod *p) {
    nod *last;
    int k = 0;
    while(p -> adr) {
        if((p -> info) * (last -> info) < 0) k++;
        last = p;
        p = p -> adr;
    }

    return k;
}
int main()
{
    nod *prim, *ultim, *nou;
    prim = new nod;

    int n, x;
    cin >> n;
    cin >> prim -> info;
    prim -> adr = NULL;
    ultim = prim;

    for(int i = 1; i <= n - 1; ++i) {
        nou = new nod;
        cin >> nou -> info;
        nou -> adr = NULL;
        ultim -> adr = nou;
        ultim = nou;
    }

    int k = S1(prim);

    cout << k;

    return 0;
}
