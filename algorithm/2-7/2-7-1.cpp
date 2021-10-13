// minimum Scalar Product

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
using p = pair<int, int>;
#define REP(i, n) for(int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) = if(b){cout << "yes" << endl;}else{cout << "No" << endl;}

int main(){
    int ans = 0;
    vector<int> v1{6, 7, 5, 78, 4, 24, 1, 2, 3}, v2{9,4,7,34,56,89,54,56,98};
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end(), greater<int>());
    REP(i, v1.size()){
        ans += v1.at(i)*v2.at(i);
    }
    cout << ans << endl;
    return 0;
}