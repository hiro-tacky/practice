// 177

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

using namespace std;
using ll = long long int;
#define NUM 1000000007

ll gcd(ll x, ll y){
    if(x%y == 0) return y;
    else{
        return gcd(y, x%y);
    }
}

ll lcm(ll x, ll y){
    if(y > x){
        ll tmp = y;
        y = x;
        x = tmp;
    }
    ll buf = gcd(x, y);
    ll buf_x = x/buf, buf_y = y/buf;
    return buf_x*buf_y*buf;
}

int main(){
    ll n, buf;
    bool c = true;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v.at(i);
    }
    buf = v.at(0);
    for(ll i=1; i<n; i++){
        ll x = v.at(i-1), y = v.at(i);
        if(gcd(x, y) != 1){
            c = false;
        }
        buf = gcd(buf, y);
    }
    if(c){
        cout << "pairwise coprime" << endl;
    }else if(c! && buf == 1){
        cout << "setwise coprime" << endl;
    }else{
        cout << "not coprime" << endl;
    }
    return 0;
}
