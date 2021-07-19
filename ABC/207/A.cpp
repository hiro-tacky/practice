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
#define REP(i, n) for(int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

int main(){
    int a, b, c, ans = 0;
    cin >> a >> b >>c;
    if(ans < a+b) ans = a+b;
    if(ans < a+c) ans = a+c;
    if(ans < b+c) ans = b+c;
    cout << ans << endl;
    return 0;
}