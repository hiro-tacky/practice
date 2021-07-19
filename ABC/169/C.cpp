// 69

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
using ll = long long;


int main(){
    ll a, b_100, ans;
    long double b;
    cin >> a >> b;
    b_100 = b*100 + 0.5;
    ans = a*b_100/100;
    cout << ans << endl;
    return 0;
}
