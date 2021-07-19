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
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

vector<vector<ll>> v;

int main(){
    ll n, q, tmp1, tmp2;
    cin >> n >> q;
    v = vector<vector<ll>> (n);
    vector<p> buf;
    REP(i, n-1){
        cin >> tmp1 >> tmp2;
        v.at(tmp1-1).push_back(tmp2-1);
        v.at(tmp2-1).push_back(tmp1-1);
    }
    vector<vector<ll>> ans(n, vector<ll>(n, INT_MAX/2));
    REP(i, n){
        queue<p> que;
        que.push(p (i, 0));
        while(!que.empty()){
            ll node = que.front().first, cost = que.front().second; que.pop();
            if(ans.at(i).at(node) <= cost) {continue;}
            else{
                ans.at(i).at(node) = cost;
                for(ll next_node: v.at(node)){
                    que.push(p (next_node, cost+1));
                }
            }
        }
    }
    REP(i, q){
        cin >> tmp1 >> tmp2;
        buf.push_back(p (tmp1-1, tmp2-1));
    }
    for(p tmp: buf){
        if(ans.at(tmp.first).at(tmp.second) % 2 == 0){cout << "Town" << endl;}else{cout << "Road" << endl;}
    }
    return 0;
}