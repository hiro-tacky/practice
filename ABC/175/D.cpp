// 173

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

int main(){
    ll n, k, sum, rem, div, ans = LLONG_MIN, tmp;
    cin >> n >> k;
    vector<ll> p(n), c(n);
    for(int i=0;i<n; i++){
        cin >> tmp;
        p.at(i) = tmp-1;
    }
    for(int i=0; i<n; i++){
        cin >> c.at(i);
    }
    sum = accumulate(c.begin(), c.end(), 0);
    div = k/n;
    rem = k%n;
    for(int i=0; i<n; i++){
        ll max_buf = LLONG_MIN, buf = 0;
        int current = i;
        if(div > 0){
            for(int j=0; j<n; j++){
                current = p.at(current);
                buf += c.at(current);
                if (max_buf < buf) max_buf = buf;
            }
            buf += sum*(div-1);
            if (max_buf < buf) max_buf = buf;
        }
        
        current = i;
        for(int j=0; j<rem; j++){
            current = p.at(current);
            buf += c.at(current);
            if (max_buf < buf) max_buf = buf;
        }
        if (ans < max_buf) ans = max_buf;
    }

    cout << ans << endl;
    return 0;
}