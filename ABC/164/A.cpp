// 154 B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>

using namespace std;

int main(){
    int s, w;
    cin >> s >> w;
    if(s > w) cout << "safe" << endl;
    else cout << "unsafe" << endl;
    return 0;
}
