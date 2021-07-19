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
#define REP(i, n) for(int i=0; i<n; i++)
#define NUM 1000000007

vector<int> v1, v2;
int main(){
    vector<pair<int, bool>> tmp2;
    string str;
    cin >> str;
    int ans = 0;
    int list[10];
    for(int i=0; i<str.size(); i++){
        if(str[i] == 'o') list[i] = 1;
        if(str[i] == 'x') list[i] = 0;
        if(str[i] == '?') list[i] = 2;
    }
    REP(i, 10000){
        bool flag = true;
        vector<bool> c(10, false);
        int tmp = i, buf;
        REP(j, 4){
            tmp /= 10;
            c.at(tmp % 10) = true;
        } 
        REP(j, 10){
            // cout << c[j] << " " << list[j] << endl;
            if(!c[j] && list[j] == 1) flag = false;
            if(c[j] && list[j] == 0) flag = false;
        }
        // cout << endl;
        if(flag) ans++;
    }
    cout << ans << endl;
    return 0;
}