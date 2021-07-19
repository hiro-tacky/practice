//クラスカル法

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <string>
#include <cmath>
#include <utility>
#include <map>
#include <random>

using namespace std;
using ll = long long int;
using p = pair<int, int>;
#define REP(i, n) for(int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) = if(b){cout << "yes" << endl;}else{cout << "No" << endl;}

int V=10;
vector<int> mincost(V, INT_MAX);
vector<bool> used(V, false);
vector<pair<pair<int, int>, int>> cost;
random_device rnd;
mt19937 mt(rnd());
uniform_int_distribution<> rand100(10, 99);
uniform_int_distribution<> randv(0, 2);

class UnionFind {
    private:
        vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
    public:
        UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
            for(int i = 0; i < N; i++) par[i] = i;
        }

        int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
            if (par[x] == x) return x;
            return par[x] = root(par[x]);
        }

        void unite(int x, int y) { // xとyの木を併合
            int rx = root(x); //xの根をrx
            int ry = root(y); //yの根をry
            if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
            par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
        }

        bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
            int rx = root(x);
            int ry = root(y);
            return rx == ry;
        }
};

class kruskal{
    private:
        struct edge{int u, v, cost;};
        vector<kruskal::edge> es;
        int v, e;
    public:
        kruskal(int v, int e){
            kruskal::v = v;
            kruskal::e = e;
        }

        int cost(){
            sort(es.begin(), es.end(), comp);
            UnionFind uf(v);
            int res = 0;
            for(edge e_buf : es){
                if(e_buf.u !=e_buf.v){
                    uf.unite(e_buf.u, e_buf.v);
                    res += e_buf.cost;
                }
            }
        }

        bool comp(const edge& e1, const edge& e2){
            return e1.cost < e2.cost;
        }
};

int main(){
    int 
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(randv(mt) == 0){
                cost.push_back(pair<pair<int, int>, int>(pair<int, int>(i, j), rand100(mt)));
            }
        }
    }
    sort(cost.begin(), cost.end(), comp);

    for(int i=0; i<cost.size(); i++){
        cout << cost.at(i).first.first << " " << cost.at(i).first.second << " " << cost.at(i).second << endl;
    }
    UnionFind tree(V);
    int res = 0;
    for(int i=0; i<cost.size(); i++){
        auto p  = cost.at(i).first;
        if(!tree.same(p.first, p.second)){
            tree.unite(p.first, p.second);
            res += cost.at(i).second;
        }
    } 

    cout << res << endl;
    return 0;
}
 