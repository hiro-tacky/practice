//双六

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

int extGCD(int a, int b, int &x, int &y) {
    cout << a << " " << b << " " << x << " " << y << endl;
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int d = extGCD(b, a%b, y, x);
    y -= (a/b) * x;
    return d;
}

int main() {
    int x = 0, y = 0;
    extGCD(111, 30, x, y);
    cout << x << ", " << y << endl;
}
 