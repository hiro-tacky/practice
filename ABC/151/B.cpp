// 154 B

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
    int n, k, m, tmp, sum=0, ans=0;
    cin >> n >> k >> m;
    for(int i=0; i<n-1; i++){
        cin >> tmp;
        sum += tmp-m;
    }
    ans = m - sum;
    if(ans < 0) cout << 0 << endl;
    else if(ans > k) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
