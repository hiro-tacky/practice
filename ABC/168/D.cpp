
// 69

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
#include <iomanip>

using namespace std;
using ll = long long;

#define _USE_MATH_DEFINES

int main(){
    int n, m, buf_a, buf_b;
    cin >> n >> m;
    vector<vector<bool>> v(n, vector<bool>(n, false));
    for(int i=0; i<m; i++){
        cin >> buf_a >> buf_b;
        v.at(buf_a-1).at(buf_b-1) = true;
        v.at(buf_b-1).at(buf_a-1) = true;
    }
    vector<pair<int, int>> to(n, pair<int, int>(-1, INT_MAX));
    to.at(0) = pair<int, int>(-1, 0);
    queue<int> que;
    que.push(0);
    while(!que.empty()){
        cout << endl;
        int now = que.front();
        que.pop();
        for(int i=0; i<n; i++){
            cout << now << "--" << i << endl;
            if(v.at(now).at(i) && to.at(i).second > to.at(now).second+1){
                to.at(i).first = now;
                to.at(i).second = to.at(now).second+1;
                que.push(i);
            }
            for(auto p: to){
                cout << p.first+1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
