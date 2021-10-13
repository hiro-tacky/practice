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
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

vector<vector<ll>> v;

int main(){
    int n, m;
    ll a_max = 0, a_min = INT32_MAX, b_max = 0, b_min = INT32_MAX;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    REP(i, n){
        cin >> a.at(i);
        a_max = max(a_max, a.at(i));
        a_min = min(a_min, a.at(i));
    }
    REP(j, m){
        cin >> b.at(j);
        b_max = max(b_max, b.at(i));
        b_min = min(b_min, b.at(i));
    }
    REP(i, n){
        REP(j, m){
            ans = min(ans, std::abs(a.at(i) - b.at(j)));
        }
    }
    cout << ans << endl;
    return 0;
}

