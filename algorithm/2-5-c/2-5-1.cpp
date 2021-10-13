// 2部グラフ判定

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <cmath>
#include <utility>
#include <map>

using namespace std;
using ll = long long int;
using p = pair<int, int>;
#define REP(i, n) for(int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) = if(b){cout << "yes" << endl;}else{cout << "No" << endl;}

int n, u, v, w;
vector<vector<int>> vv;
vector<int> cc;

bool dfs(int node, int color){
    cc.at(node) = color;
    for(int tmp : vv.at(node)){
        if(cc.at(tmp) == color) return false;
        else if(cc.at(tmp) == 0 && !dfs(tmp, -color)) return false;
    }
    return true;
}

int main(){
    cin >> n;
    vv = vector<vector<int>> (n, vector<int>());
    vv = {{1, 3}, {0, 2}, {1, 3}, {0, 2}};
    cc = vector<int> (n, 0);
    cout << dfs(0, 1) << endl;
    return 0;
}