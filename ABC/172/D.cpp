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

int main(){
    long long int n, sum=0, buf=0;
    cin >> n;

    for(long long int j=1; j<=n; j++){
        buf = j;
        while(buf <= n){
            sum += buf;
            buf += j;
        }
    }
    cout << sum << endl;
}
