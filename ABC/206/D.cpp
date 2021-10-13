#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
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
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<pair<ll, ll>, ll> mp;
    REP(i, n){
        cin >> v.at(i);
    }
    REP(i, n/2){
        if(v.at(i) != v.at(n-i-1)){
            pair<ll, ll> tmp(min(v.at(i), v.at(n-i-1)), max(v.at(i), v.at(n-i-1)));
            mp[tmp]++;
            cout << tmp.first << " " << tmp.second << " " << mp[tmp] << endl;
        }
    }
    for(auto buf: mp){
        
    }
    cout << max((unsigned int)0, mp.size() - 1) << endl; 
    return 0;
}
