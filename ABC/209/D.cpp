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
// using ll = long int;
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

vector<vector<int>> v;

int main(){
    int n, q, tmp1, tmp2;
    cin >> n >> q;
    v = vector<vector<int>> (n);
    vector<pair<int, int>> v2(q, pair<int, int>());
    REP(i, n-1){
        cin >> tmp1 >> tmp2;
        v.at(tmp1-1).push_back(tmp2-1);
        v.at(tmp2-1).push_back(tmp1-1);
    }
    REP(i, q){
        cin >> tmp1 >> tmp2;
        v2.at(i) = pair<int, int>(tmp1-1, tmp2-1);
    }
    vector<int> ans(n, 0);
    queue<int> que;
    que.push(0);
    ans.at(0) = 1;
    while(!que.empty()){
        int buf = que.front(); que.pop();
        for(int tmp: v.at(buf)){
            if(ans.at(tmp) == 0){
                ans.at(tmp) = -ans.at(buf);
                que.push(tmp);
            } 
        }
    }
    for(pair<int, int> qq: v2){
        if(ans.at(qq.first) == ans.at(qq.second)){cout << "Town" << endl;}
        else if(ans.at(qq.first) != ans.at(qq.second)){cout << "Road" << endl;}
    }
    return 0;
}