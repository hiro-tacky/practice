//素数の個数

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <complex>
#include <cmath>

using namespace std;

int main() {
    long long int n = 50, sq, buf;
    vector<bool> v(n, false);
    sq = sqrt(n);
    for(int i=1; i<sq; i++){
        if(!v.at(i)){
            for(int j=2; ;j++){
                buf = (i+1)*j;
                if(buf > n) break;
                v.at(buf - 1) = true;
            }
        }
    }
    for(int i=1; i<n; i++){
        if(!v.at(i)) cout << i+1 << " ";
    }
    cout << endl;
    return 0;
}
 