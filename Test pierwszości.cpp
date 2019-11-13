#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > sasiedzi;
vector<int>rodzic;
vector<int>poziom;
vector<int>preorder;
vector<int>rozmiar;

int nr;
void znajdz_rodzica(int kto, int rodz, int poz) {
    rodzic[kto] = rodz;
    poziom[kto] = poz;
    preorder[kto] = nr++;
    for(int i=0; i<sasiedzi[kto].size(); i++) {
        if(sasiedzi[kto][i] != rodz) {
            znajdz_rodzica(sasiedzi[kto][i], kto, poz+1);
        }
    }
    rozmiar[kto] = nr-preorder[kto];
}

bool jest_dzieckiem (int kto, int kogo) {
    return preorder[kogo]<=preorder[kto]&&preorder[kto]<preorder[kogo]+rozmiar[kogo];
}

int NWP (int a, int b) {
    if(jest_dzieckiem(a, b)) {
        return b;
    }
    while(!jest_dzieckiem(b, a)) {
        a = rodzic[a];
    }
    return a;
}

int odleglosc(int a, int b) {
    return poziom[a]+poziom[b]-2*poziom[NWP(a, b)];
}

int main()
{
    int n;
    cin >> n;
    sasiedzi.resize(n + 1);
    rodzic.resize(n + 1);
    poziom.resize(n + 1);
    preorder.resize(n + 1);
    rozmiar.resize(n + 1);
    for(int i=1; i<n; i++) {
        int a, b;
        cin >> a >> b;
        sasiedzi[a].push_back(b);
        sasiedzi[b].push_back(a);
    }
    nr=0;
    znajdz_rodzica(1,1,0);
    int m, a, b, suma=0;
    cin >> m >> a;
    for(int i=1; i<m; i++) {
        cin >> b;
        suma += odleglosc(a, b);
        a = b;
    }
 cout << suma;

    return 0;
}
