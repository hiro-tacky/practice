// 179

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

using namespace std;
using ll = long long int;
#define NUM 1000000007

int main(){
    int n, k, buf1, buf2;
    ll ans=0;
    cin >> n >> k;
    vector<int> v;
    for(int i=0; i<k; i++){
        cin >> buf1 >> buf2;
        for(int j=buf1; j<=buf2; j++){
            v.push_back(j);
        }
    }
    vector<long long int> dp(n, 0);
    dp.at(0) = 1;
    for(int i=0; i<n; i++){
        for(auto itr = v.begin(); itr != v.end(); itr++){
            if(i + *itr < n){
                dp.at(i + *itr) = (dp.at(i) + dp.at(i + *itr))%998244353;
            }else{
                break;
            }
        }
    }
    cout << dp.back()%998244353 << endl;
    return 0;
}