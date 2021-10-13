// 2部グラフ判定

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
using p = pair<int, int>;
#define REP(i, n) for(int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) = if(b){cout << "yes" << endl;}else{cout << "No" << endl;}

int mod_pow(int x, int n, int mod){
    int ans = 1, buf;
    while(n != 0){
        cout << ans << endl;
        if(n%2 == 1){
            ans = ans * x % mod;
        }
        x = x * x % mod;
        n /= 2;
    }
    return ans;
}

int main(){
    cout << mod_pow(3, 5, 1000000000) << endl;
    return 0;
}