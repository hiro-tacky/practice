//線分状の格子点の数

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <complex>

using namespace std;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}

int main(){
    pair<int, int> p1(1, 11), p2(5, 3), buf;
    buf.first = abs(p1.first - p2.first);
    buf.second = abs(p1.second - p2.second);
    cout << gcd(buf.first, buf.second)-1 << endl;
    return 0;
}
 