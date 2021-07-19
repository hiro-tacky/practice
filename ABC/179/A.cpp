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

using namespace std;
using ll = long long int;
#define NUM 1000000007

int main(){
    string str;
    cin >> str;
    if(str.back() == 's') str += "es";
    else str += "s";
    cout << str << endl;
    return 0;
}