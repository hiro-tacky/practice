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
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

int main(){
    int n, m, tmp1, tmp2, tmp3;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(n, -1));
    REP(i, m){
        cin >> tmp1 >> tmp2 >> tmp3;
        v.at(tmp1-1).at(tmp2-1) = tmp3;
    }
    ll ans = 0;
    REP(k, n){
        REP(s, n){
            vector<ll> d(n, INT_MAX);
            d.at(s) = 0;
            queue< pair<int, int> > que;
            que.push(pair<int, int>(0, s));

            while(!que.empty()){
                pair<int, int> p = que.front(); que.pop();
                int node = p.second;
                if(d.at(node) > 0 && d.at(node) < p.first) {continue;}
                REP(i, n){
                    if(i <= k || i == s){ 
                        if(v.at(node).at(i) > 0 && d.at(i) > d.at(node) + v.at(node).at(i)){
                            d.at(i) = d.at(node) + v.at(node).at(i);
                            que.push(pair<int, int>(d.at(i), i));
                        }
                    }
                }
            }
            REP(i, n){
                std::cout << d.at(i) << " ";
            }
            std::cout << endl;
            REP(t, n){
                ll buf = INT_MAX;
                REP(i, n){
                    if(d.at(i) != INT_MAX && buf > d.at(i) + v.at(i).at(t)) buf = d.at(i) + v.at(i).at(t);
                }
                std::cout << s << " " << t << " " << k << " " << buf << endl;
                if(buf != INT_MAX && buf > 0) ans += buf;
            }
            std::cout << endl;
        }
    }
    std::cout << ans << endl;
    return 0;
}