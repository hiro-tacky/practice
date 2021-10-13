#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>
#include <map>
#include <set>

using namespace std;
using ll = long long int;
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

ll func(vector<vector<ll>> v, int h, int w, int c){
    ll ans = INT32_MAX;
    vector<vector<ll>> cost(h, vector<ll> (w, INT32_MAX)), dis(h, vector<ll> (w, INT32_MAX));
    cost.at(0).at(0) = v.at(0).at(0);
    REP(i, h){
        REP(j, w){
            if(i == 0 && j == 0) continue;
            if(i == 0) cost.at(i).at(j) = min(v.at(i).at(j), cost.at(i).at(j-1) + c);
            else if(j == 0) cost.at(i).at(j) = min(v.at(i).at(j), cost.at(i-1).at(j) + c);
            else cost.at(i).at(j) = min({v.at(i).at(j), cost.at(i-1).at(j) + c, cost.at(i).at(j-1) + c});
            // REP(i, h){
            //     REP(j, w){
            //         cout << cost.at(i).at(j) << " ";
            //     }
            //     cout << endl;
            // }
        }
    }
    REP(i, h){
        REP(j, w){
            if(i == 0 && j == 0) continue;
            if(i == 0) dis.at(i).at(j) = cost.at(i).at(j-1) + c + v.at(i).at(j);
            else if(j == 0) dis.at(i).at(j) = cost.at(i-1).at(j) + c + v.at(i).at(j);
            else dis.at(i).at(j) = min(cost.at(i-1).at(j) + c + v.at(i).at(j), cost.at(i).at(j-1) + c + v.at(i).at(j));
        }
    }

    REP(i, h){
        REP(j, w){
            // cout << dis.at(i).at(j) << " ";
            ans = min(ans, dis.at(i).at(j));
        }
        // cout << endl;
    }
    return ans;
}

int main(){
    ll h, w, c, ans = INT64_MAX, tmp;
    cin >> h >> w >> c;
    vector<vector<ll>> v1(h, vector<ll> (w)), v2(w, vector<ll> (h)), v3(w, vector<ll> (h));
    REP(i, h){
        REP(j, w){
            cin >> tmp;
            v1.at(i).at(j) = tmp;
            v2.at(j).at(i) = tmp;
            v3.at(j).at(h-1-i) = tmp;
        }
    }
    ans = min(ans, func(v1, h, w, c));
    ans = min(ans, func(v2, w, h, c));
    ans = min(ans, func(v3, w, h, c));
    cout << ans << endl;
    return 0;
}