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
#define REP(i, n) for(int i=1; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

int main(){
    ll n, tmp, ans=0, max = 0;;
    cin >> n;
    vector<ll> v_c(n);
    REP(i, n){
        cin >> tmp;
        if(max < tmp) {max = tmp;}
        v_c.at(i) = tmp;
    }
    vector<vector<ll>> dp(n, vector<ll>(max, 0));
    REP(i, n){
        REP(j, max){
            dp.at()
        }
    }
    return 0;
}