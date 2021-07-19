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
    int n, buf1, buf2;
    bool a1 = false, a2 = false, a3 = false, ans = false;
    cin >> n;
    vector<bool> v(n);
    for(int i=0; i<n; i++){
        cin >> buf1 >> buf2;
        if(buf1 == buf2) v.at(i) = true;
        else v.at(i) = false;
    }
    for(int i=2; i<n; i++){
        if(v.at(i-2) && v.at(i-1) && v.at(i)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}