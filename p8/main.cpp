#include <iostream>

using namespace std;
struct nod {
    int info;
    nod *urm;
};

void sub(nod *&p, int n) {
    nod *nou, *ultim;
    p = new nod;
    nou = new nod;

    p -> info = 1;
    nou -> info = 1;

    nou -> urm = NULL;
    p -> urm = nou;
    ultim = nou;

    int a = 1, b = 1, c = 2;

    for(int i = 1; i <= n - 2; ++i) {

        nou = new nod;
        nou -> info = c;

        a = b, b = c;
        c = a + b;


        nou -> urm = NULL;
        ultim -> urm = nou;
        ultim = nou;
    }
}
int main()
{
    nod *prim;
    int n;
    cin >> n;
    sub(prim, n);
    while(prim -> urm) {
        prim = prim -> urm;
    }

    // int* p = new int(7);

    cout << 1 << " " << prim -> info;

    return 0;
}
