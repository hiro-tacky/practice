// 154 C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>

using namespace std;

int main(){
    long long int n, k;
    long double max=0, buf;
    cin >> n >> k;
    vector<long double> v, sum;
    int tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back((tmp+1.0)/2.0);
    }

    sum.push_back(0);
    for(int i=0; i<n; i++){
        sum.push_back(sum.at(i) + v.at(i));
    }

    for(int i=0; i<n-k+1; i++){
        buf = sum.at(i+k) - sum.at(i);
        if(max<=buf) max = buf;
    }
    cout << fixed << setprecision(6) << max << endl;
    return 0;
}
