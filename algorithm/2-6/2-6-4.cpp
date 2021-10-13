//区間内の素数の個数

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

int Eratosthenes(long long int n){
    long long int sq, buf;
    int count = 0;
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
        if(!v.at(i)) {count++;}
    }   
    return count;
}

int main() {
    long long int n = 22, m = 37;
    cout << Eratosthenes(m-1) - Eratosthenes(n-1) << endl;
    return 0;
}
 