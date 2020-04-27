// 153 A

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
    long long int n, k, tmp, sum;
    vector<long long int> h;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> tmp;
        h.push_back(tmp);
    }
    if(n <= k){
        cout << 0 << endl;
        return 0;
    }
    sort(h.begin(), h.end(), greater<int>());
    auto s = h.begin();
    s += k;
    sum = accumulate(s, h.end(), 0ll);
    cout << sum << endl;
    return 0;
}
