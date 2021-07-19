// 169

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
    ll n, ans=1, buf;
    cin >> n;
    bool c = false;
    for(ll i=0; i<n; i++){
        cin >> buf;
        if(buf == 0){
            cout << 0 << endl;
            return 0;
        }
        if(c || ans*buf > 1000000000000000000 || 1000000000000000001/ans < buf){
            c = true;
        }
        ans *= buf;
    }

    if(c){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}
