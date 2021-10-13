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
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

vector<vector<ll>> v;

int main(){
    ll a, b;
    cin >> a >> b;
    if(0<a && b==0) cout << "Gold" << endl;
    if(a==0 && 0<b) cout << "Silver" << endl;
    if(0<a && 0<b) cout << "Alloy" << endl;
    return 0;
}
