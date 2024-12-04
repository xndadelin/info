#include <iostream>
#include <cstring>
using namespace std;
struct nod {
    char litera;
    int cnt;
    nod *urm;
};

int main()
{
    nod *prim, *ultim, *nou;
    prim = new nod;
    prim -> urm = NULL;
    ultim = prim;

    char *sir = new char[257];
    cin.getline(sir, 256);

    for(int i = 65, k = 0; i <= 90; ++i, ++k) {
        char *pch;
        int cnt = 0;
        pch = strchr(sir, char(i));
        while(pch) {
            cnt++;
            pch = strchr(pch + 1, char(i));
        }
        if(cnt > 1) {
            nou = new nod;
            nou -> litera = char(i);
            nou -> cnt = cnt;
            nou -> urm = NULL;
            ultim -> urm = nou;
            ultim = nou;
        }
    }

    prim = prim -> urm;

    if(!prim) cout << "Lista vida";
    while(prim) {
        cout << prim -> litera << " " << prim -> cnt << endl;
        prim = prim -> urm;
    }
    return 0;
}
