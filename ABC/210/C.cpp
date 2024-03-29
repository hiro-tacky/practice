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
#include <set>

using namespace std;
using ll = long long int;
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}


int main(){
    ll n, k, ans=0, buf;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> mp;
    REP(i, n){
        cin >> v.at(i);
    }
    REP(i, k){
            mp[v.at(i)]++;
    }
    ans = mp.size();
    for(int i=k; i<n; i++){
        mp[v.at(i-k)]--;
        mp[v.at(i)]++;
        if(mp[v.at(i-k)] == 0) mp.erase(v.at(i-k));
        if(ans < mp.size()) ans = (int)mp.size();
    }
    cout << ans << endl;
    return 0;
}
