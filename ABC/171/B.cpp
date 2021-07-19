//ABC171

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <complex>
#include <string>

using namespace std;

int main(){
    int n, k, sum=0;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v.at(i);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<k; i++){
        sum += v.at(i);
    }
    cout << sum << endl;
    return 0;
}