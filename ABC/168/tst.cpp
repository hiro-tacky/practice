
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
#include <iomanip>

using namespace std;
using ll = long long;

#define _USE_MATH_DEFINES

int main(){
    int x=10, di, di2;
    di = x-1;
    di2 = (x-1)*2;
    string str0, str1, str2;
    str1 = "1f/" + to_string(di2) + "f";
    cout << "	calcGaussParam(0f, " + str1 + ", 0.5f)," << endl; 
    for(int i=1; i<x-1; i++){
        str0 = to_string(i) + "f/" + to_string(di) + "f";
        str1 = to_string((i-1)*2+1) + "f/" + to_string(di2) + "f";
        cout << "	calcGaussParam(" + str0 + ", " + str1 + ", 0.5f)," << endl;
    }
    str1 = to_string(di-1) + "f/" + to_string(di2) + "f";
    cout << "	calcGaussParam(1f, " + str1 + ", 0.5f)," << endl; 
    return 0;
}
