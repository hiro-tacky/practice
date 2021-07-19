// 69

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
    ll n, tmp, sum=0;
    cin >> n;
    tmp = n;
    vector<int> v;
    for(ll i=2; i<=sqrt(n); i++){
        int count=0;
        while(tmp % i == 0){
            count++;
            tmp /= i;
        }
        if(count != 0){
            v.push_back(count);
        }
    }
    if(tmp != 1) v.push_back(1);

    for(int n: v){
        ll i=1;
        for(; i*(i+1)/2-1<n; i++){}
        sum += i-1;
    }
    cout << sum << endl;
    return 0;
}
