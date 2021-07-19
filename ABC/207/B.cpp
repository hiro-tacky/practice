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
    int N; cin >> N;
    vector<double> l(N),r(N);
    for(int i=0; i<N; i++){
        int t; cin >> t >> l[i] >> r[i];
        t--;
        if(t&1) r[i] -= 0.5;
        if(t&2) l[i] += 0.5;
    }
    int ans = 0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            ans += (max(l[i],l[j]) <= min(r[i],r[j]));
        }
    }
    cout << ans << endl;
    return 0;
}