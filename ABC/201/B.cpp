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

int n;
vector<string> v_str;
vector<int> v_int;

int main(){
    cin >> n;
    REP(i, n){
        string str;
        int tmp;
        cin >> str >> tmp;
        v_str.push_back(str);
        v_int.push_back(tmp);
    }
    int first = 0, second = 0, ans = -1, tmp = -1;
    REP(i, n){
        if(first < v_int.at(i)){
            second = first;
            first = v_int.at(i);
            ans = tmp;
            tmp = i;
        }else if(second < v_int.at(i)){
            second = v_int.at(i);
            ans = i;
        }
    }
    cout << v_str.at(ans);
    return 0;
}