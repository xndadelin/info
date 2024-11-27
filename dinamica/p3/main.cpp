#include <iostream>

using namespace std;
struct nod {
    int info;
    nod *urm;
};

void scrie(nod *a) {
    while(a) {
        int copie = a -> info;
        int x = copie;
        int ogl = 0;
        while(x)
            ogl = ogl * 10 + x % 10, x = x / 10;

        if(copie >= 1000 && ogl / 10 % 10 % 2 == 0)
            cout << copie << " " ;

        if(copie <= 999) if(copie / 100 % 2 == 0)
            cout << copie << " " ;

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
