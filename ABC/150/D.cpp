//ABC150

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <complex>
#include <string>

using namespace std;
using ll = long long int;

ll gcd(ll x, ll y){
    if(x%y == 0) return y;
    else{
        return gcd(y, x%y);
    }
}

ll lcm(ll x, ll y){
    ll buf = gcd(x, y);
    ll buf_x = x/buf, buf_y = y/buf;
    return buf_x*buf_y*buf;
}

int main(){
    ll n, m, ans=0, lcm_buf;
    cin >> n >> m;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v.at(i);
    }
    lcm_buf = v.at(0);
    for(int i=1; i<n; i++){
        lcm_buf = lcm(lcm_buf, v.at(i));
    }

    for(auto itr=count.begin(); itr != count.end(); itr++){
        if(*itr == n) ans++;
    }
    cout << ans << endl;
    return 0;
}