//食物連鎖 要復習

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

using namespace std;
using ll = long long int;
using p = pair<int, int>;
#define REP(i, n) for(int i=0; i<n; i++)
#define NUM 1000000007

int n, k;
vector<int> v1, v2;

class UnionFind{
public:
    vector<int> parent; //parent[i]はiの親
    vector<int> rank; //素集合のサイズを表す配列(1で初期化)

    //コンストラクタ
    UnionFind(int n){ 
        //全ての要素の根が自身であるとして初期化
        parent = vector<int>(n), rank = vector<int>(n);
        REP(i, n){
            parent.at(i) = i;
            rank.at(i) = 0;
        }
    }

    int find(int x){
        if(parent.at(x) == x){return x;}
        else{return parent.at(x) = find(parent.at(x));}
    }

    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y) return;
        if(rank.at(x) < rank.at(y)){
            parent.at(x) = y;
        }else{
            parent.at(y) = x;
            if(rank.at(x) == rank.at(y)) rank.at(x)++;
        }
    }

    bool same (int x, int y){
        return find(x) == find(y);
    }
};

int main(){
    cin >> n >> k;
    UnionFind unionfind(n*3);
    int tmp1, tmp2, tmp3, ans = 0;
    REP(i, k){
        cin >> tmp1 >> tmp2 >> tmp3;
        if(tmp1 == 1){
            if(unionfind.same(tmp2, tmp3 + n) || unionfind.same(tmp2, tmp3 + 2*n)){
                ans++;
            }else{
                unionfind.unite(tmp2, tmp3);
                unionfind.unite(tmp2 + n, tmp3 + n);
                unionfind.unite(tmp2 + 2*n, tmp3 + 2*n);
            }
        }else{
            if(unionfind.same(tmp2, tmp3) || unionfind.same(tmp2, tmp3 + 2*n)){
                ans++;
            }else{
                unionfind.unite(tmp2, tmp3 + n);
                unionfind.unite(tmp2 + n, tmp3 + 2*n);
                unionfind.unite(tmp2 + 2*n, tmp3);
            }
        }
    }
    cout << ans << endl;
    return 0;
}