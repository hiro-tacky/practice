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
    ll n, x, tmp, ans = 0;
    cin >> n >> x;
    vector<int> v(n);
    REP(i, n){
        cin >> tmp;
        ans += tmp;
    }
    ans -= n/2;
    Y_N(ans <= x);
    return 0;
}