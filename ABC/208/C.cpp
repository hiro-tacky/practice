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
#define Y_N(b) if(b){cout << "yes" << endl;}else{cout << "No" << endl;}

bool comp(pair<ll, ll> v1, pair<ll, ll> v2){
    return v1.second < v2.second;
}

int main(){
    ll n, k, tmp;
    cin >> n >> k;
    tmp = k/n; k = k%n;
    vector<ll> v(n, tmp), tmp2;
    vector<pair<ll, ll>> buf(n);
    for(ll i=0; i<n; i++){
        buf.at(i).first = i;
        cin >> buf.at(i).second;
    }
    sort(buf.begin(), buf.end(), comp);
    REP(i, k){
        tmp2.push_back(buf.at(i).first);
    }
    for(ll tmp3: tmp2){
        v.at(tmp3)++;
    }
    for(ll x: v){
        cout << x << endl;
    }
}