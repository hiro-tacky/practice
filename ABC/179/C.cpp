// 179

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

using namespace std;
using ll = long long int;
#define NUM 1000000007

int main(){
    ll n, a, b, c, ans=0;
    cin >> n;
    for(ll i=1; i<n; i++){
        ans += (n-1)/i;
    }
    cout << ans << endl;
    return 0;
}