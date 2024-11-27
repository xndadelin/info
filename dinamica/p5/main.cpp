#include <iostream>
#include <cmath>
using namespace std;
struct nod{
    int info;
    nod *adru;
};

int gcd(int a, int b) {
    if(b == 0) return a;
    else return (b, a % b);
}

void divizor(nod *p , int x) {
    while(p){
        if(gcd(p -> info, x) == 1) cout << p -> info << " ";
        p = p -> adru;
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
    prim -> adru = NULL;
    ultim = prim;

    for(int i = 1; i <= n - 1; ++i) {
        nou = new nod;
        cin >> x;
        nou -> info = x;
        nou -> adru = NULL;
        ultim -> adru = nou;
        ultim = nou;
    }

    cin >> x;
    divizor(prim, x);

    return 0;
}
