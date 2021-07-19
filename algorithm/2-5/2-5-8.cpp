//Roadbnlocks

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

int n ,r;
vector<vector<pair<int, int>>> g;
vector<int> dist, dist2;

int main(){
    n = 4; r = 4;
    g = vector<vector<pair<int, int>>> (n, vector<pair<int, int>>());
    dist = vector<int> (n, INT_MAX);
    dist2 = vector<int> (n, INT_MAX);

    g.at(0).push_back(p (1, 100)); g.at(1).push_back(p (0, 100));
    g.at(1).push_back(p (2, 250)); g.at(2).push_back(p (1, 250));
    g.at(1).push_back(p (3, 200)); g.at(3).push_back(p (1, 200));
    g.at(2).push_back(p (3, 100)); g.at(3).push_back(p (2, 100));

    dist.at(0) = 0;
    queue<p> que;
    que.push(p (0, 0));
    while(!que.empty()){
        p tmp = que.front(); que.pop();
        int v = tmp.first, d = tmp.second;
        if(dist2.at(v) < d)continue;
        for(p buf: g.at(v)){
            int to_node = buf.first, to_dist = d + buf.second;
            if(dist.at(to_node) > to_dist){
                dist2.at(to_node) = dist.at(to_node);
                dist.at(to_node) = to_dist;
                que.push(p (to_node, to_dist));
            }else if(dist2.at(to_node) > to_dist){
                dist2.at(to_node) = to_dist;
                que.push(p (to_node, to_dist));
            }
            REP(i, dist.size()){
                cout << i << " " << dist.at(i) << " " << dist2.at(i) << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
 