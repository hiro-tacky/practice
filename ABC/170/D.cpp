// 171

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
    ll n, count=0;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    vector<ll> v(a.back()+1, 0);
    for(ll n: a){
        if(v.at(n) != 0){
            v.at(n) = 2;
            continue;
        }
        for(ll j=1; n*j<a.back()+1; j++){
            v.at(n*j)++;
        }
    }
    for(ll buf: a){
        if(v.at(buf) == 1) count++;
    }
    cout << count << endl;
    return 0;
}
