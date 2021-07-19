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

using namespace std;

int main(){
    long long int k, tmp=0, b_buf=0, buf=0, n, m, ans=0, j;
    cin >> n >> m >> k;
    vector<long long  int> a(n), b_sum(m);
    for(int i=0; i<n; i++){
        cin >> a.at(i);
    }
    for(long long int i=0; i<m; i++){
        cin >> buf;
        b_buf += buf;
        b_sum.at(i) = b_buf;
    }

    j=m;
    for(long long int i=0; i<=n; i++){
        if(tmp > k) break;
        for(; j>0; j--){
            // cout << a_sum.at(i) << " " << b_sum.at(j) << endl;
            if(tmp + b_sum.at(j-1) <= k){
                break;
            }
        }
        ans = max(ans, i+j);
        if(i == n) break;
        tmp += a.at(i);
    }
    cout << ans << endl;
    return 0;
}
