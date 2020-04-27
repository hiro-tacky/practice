// 153 A

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int h, a;
    cin >> h >> a;
    if(h%a == 0) cout << h/a << endl;
    else cout << h/a+1 << endl;
    return 0;
}
