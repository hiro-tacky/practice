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

int s, n=7, e=10;
struct edge{int from, to, cost;};
vector<edge> vv;
vector<int> cost;



int main(){
    cin >> s;
    vv = {{0, 2, 5}, {0, 1, 2}, {1, 2, 4}, {2, 3, 2}, {1, 3, 6}, {1, 4, 10}, {3, 5, 1}, {4, 5, 3}, {4, 6, 5}, {5, 6, 9},
    {2, 0, 5}, {1, 0, 2}, {2, 1, 4}, {3, 2, 2}, {3, 1, 6}, {4, 1, 10}, {5, 3, 1}, {5, 4, 3}, {6, 4, 5}, {6, 5, 9}};
    cost = vector<int> (n, INT32_MAX);
    cost.at(s) = 0;
    while(true){
        bool c = true;
        for(edge buf: vv){
            if(cost.at(buf.from) != INT32_MAX && cost.at(buf.to) > min(cost.at(buf.from) + buf.cost, cost.at(buf.to))){
                cost.at(buf.to) = min(cost.at(buf.from) + buf.cost, cost.at(buf.to));
                c = false;
                for(int tmp:cost){
                    cout << tmp << " ";
                }
                cout << endl;
            }
        }
        if(c) break;
    }
    return 0;
}