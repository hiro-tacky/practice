// ABC157 C

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

class unionfind{
    public:
        vector<int> d;
        unionfind(int n=0){
            d = vector<int>(n, -1);
        }
        int find(int x){
            if(d.at(x) < 0) return x;
            else return d.at(x) = find(d.at(x));
        }
        bool unite(int x, int y){
            x = find(x);
            y = find(y);
            if(x == y) return false;
            if(d.at(x) > d.at(y)) swap(x, y);
            d.at(x) += d.at(y);
            d.at(y) = x;
            return true;
        }
        bool same(int x, int y){ return find(x) == find(y);}
        int size(int x){ return -d.at(find(x));}
};

int deg[100005];
vector<int> to[100005];

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    unionfind uf(n);
    vector<pair<int, int>> sns_friend, sns_block;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        deg[a]++;
        deg[b]++;
        uf.unite(a, b);
    }

    for(int i=0; i<k; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    for(int i=0; i<n; i++){
        int anw = uf.size(i)-1-deg[i];
        for(int u: to[i]){
            if(uf.same(i, u)) anw--;
        }
        cout << anw << " ";
    }


    return 0;
}