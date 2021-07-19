// 177

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

using namespace std;
using ll = long long int;
#define NUM 1000000007

int main(){
    ll a, b, c, d, buf = LLONG_MIN;
    cin >> a >> b >> c >> d;
    if(buf < a*c) buf = a*c;
    if(buf < a*d) buf = a*d;
    if(buf < b*c) buf = b*c;
    if(buf < b*d) buf = b*d;
    cout << buf << endl;
    return 0;
}