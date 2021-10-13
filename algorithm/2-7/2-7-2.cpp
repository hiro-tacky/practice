// Crazy Rows

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
using ll = long long int;
using p = pair<int, int>;
#define REP(i, n) for(int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) = if(b){cout << "yes" << endl;}else{cout << "No" << endl;}

int main(){
    int n=4, tmp, cnt=0;
    vector<vector<bool>> v
    {{1, 1, 1, 0},
     {1, 1, 0, 0},
     {1, 1, 0, 0},
     {1, 0, 0, 0}
    };
    vector<int> vv(n);
    REP(i, n){
        tmp = 0;
        REP(j, n){
            if(v.at(i).at(j)) tmp = j;
        }
        vv.at(i) = tmp;
    }
    REP(i, n){
        for(int buf: vv){
            cout << buf << " ";
        }
        cout << endl;
        if(vv.at(i) <= i) continue;
        for(int j=i+1; j<n; j++){
            if(vv.at(j) <= i){
                swap(vv.at(i), vv.at(j));
                cnt += j-i+1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}