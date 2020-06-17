// C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <utility>

using namespace std;

inline long long int pow(int x, int r){
    return x*r;
}

int main(){
    long long int a, r, n, x;
    cin >> a >> r >> n;
    x = a;
    for(int i=0; i<n-1; i++){
        x = pow(x, r);
        if(x > 1000000000 || x < 0){cout << "large" << endl; return 0;}
    }
    cout << x;
    return 0;
}
