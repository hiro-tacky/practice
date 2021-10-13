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
    vector<vector<int>> cost (n, vector<int> (n));
    vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(n, vector<ll> (n+1, INT32_MAX)));
    REP(i, m){
        cin >> tmp1 >> tmp2 >> tmp3;
        dp.at(tmp1-1).at(tmp2-1).at(0) = tmp3;
    }
    ll ans = 0;
    REP(k, n){
        REP(i, n){
            REP(j, n){
                dp.at(i).at(j).at(k+1) = min(dp.at(i).at(j).at(k), dp.at(i).at(k).at(k) + dp.at(k).at(j).at(k));
            }
        }
    }
    REP(i, n){
        REP(j, n){
            REP(k, n){
                if(i == j || dp.at(i).at(j).at(k+1) == INT32_MAX) continue;
                ans += dp.at(i).at(j).at(k+1);
            }
        }
    }
    cout << ans << endl;
    return 0;
}