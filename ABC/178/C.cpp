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

ll modpow(ll x, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * x % NUM;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % NUM;
        n >>= 1;  // n を1bit 左にずらす
    }
    return res;
}

int main(){
    ll n, ans;
    cin >> n;
    ans = (modpow(10, n) - 2 * modpow(9, n) + modpow(8, n))%NUM;
    if(ans < 0) ans = NUM + ans;
    cout << ans << endl;
    return 0;
}