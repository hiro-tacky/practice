//食物連鎖 要復習

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
#include <utility>
#include <map>

using namespace std;
using ll = long long int;
using p = pair<int, int>;
#define REP(i, n) = for(int i=0; i<n; i++)
#define NUM 1000000007


int main(){
    vector<int> v(3);
    int a, b, c;
    cin >> v.at(0) >> v.at(1) >> v.at(2);
    sort(v.begin(),v.end());
    if(v.at(1) - v.at(0) == v.at(2) - v.at(1)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}