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
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

vector<vector<ll>> v;

int main(){
    ll n, a, x, y;
    cin >> n >> a >> x >> y;
    if(n > a){
        cout << a*x + (n-a)*y << endl;
    }else{
        cout << n*x << endl;
    }
    return 0;
}
