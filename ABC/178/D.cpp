// 177

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
using ll = long long int;
#define NUM 1000000007

int main(){
    int s;
    ll ans = 0;
    cin >> s;
    vector<vector<ll>> v(s, vector<ll>(s+1, 0));
    for(int i=0; i<v.size(); i++){
        v.at(i).at(0) = 1;
    }
    for(int i=1; i<v.size(); i++){
        for(int j=1; j<i+1; j++){
            v.at(i).at(j) = (v.at(i-1).at(j-1) + v.at(i-1).at(j))%NUM;
        }
    }
    for(int i=1; s>=3*i; i++){
        ans += v.at(s-i*2-1).at(i-1);
        ans %= NUM;
    }
    cout << ans << endl;
    return 0;
}