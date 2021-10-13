//線分状の格子点の数

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <cmath>
#include <utility>
#include <map>

using namespace std;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}

int main(){
    pair<int, int> p1(1, 11), p2(5, 3);
    int x, y;
    x = std::abs(p1.first - p2.first);
    y = std::abs(p1.second - p2.second);
    cout << gcd(max(x, y), min(x, y))-1 << endl;
    return 0;
}
 