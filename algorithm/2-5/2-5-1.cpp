// 2部グラフ判定

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
#define Y_N(b) = if(b){cout << "yes" << endl;}else{cout << "No" << endl;}

int n, u, v, w;
vector<vector<int>> vv;
vector<int> cc;

bool dfs(int i, int c){
    cc.at(i) = c;
    for(auto itr = vv.at(i).begin(); itr != vv.at(i).end(); itr++){
        if(cc.at(*itr) == cc.at(i)){return false;}
        else if(cc.at(*itr) == 0 && dfs(*itr, -c)){return false;}
    }
    return true;
}

int main(){
    cin >> n;
    vv = vector<vector<int>> (n, vector<int>());
    vv = {{1, 3}, {0, 2}, {1, 3}, {0, 2}};
    cc = vector<int>(n, 0);
    if(dfs(0, 1)){cout << "yes" << endl << endl;}else{cout << "No" << endl;}
    for(auto itr = cc.begin(); itr != cc.end(); itr++){
        cout << *itr << endl;
    } 
    return 0;
}