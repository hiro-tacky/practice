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
#include <set>

using namespace std;
using ll = long long int;
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}


int main(){
    ll n, tmp, co =0;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    REP(i, n){
        cin >> tmp;
        mp[tmp]++;
    }
    for(auto buf: mp){
        if(buf.second > 0) co += buf.second*(buf.second-1)/2;
    }
    cout << n*(n-1)/2 - co << endl;
    return 0;
}
