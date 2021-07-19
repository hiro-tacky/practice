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
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

bool func(int n,vector<p> s, vector<p> t){
    bool c = true;
    REP(i, n){
        if(t.at(i).first >> t.at(i).second)
    }
}

int main(){
    int n, x, y;
    cin >> n;
    vector<p> s(n), t(n);
    REP(i, n){
        cin >> s.at(i).first >> s.at(i).second;
    }
    REP(i, n){
        cin >> t.at(i).first >> t.at(i).second;
    }
    x = t.at(0).first; y = t.at(0).second;
    t.at(0).first = 0; t.at(0).second = 0;
    for(int i = 1; i<n; i++){
        t.at(0).first -= x; t.at(0).second -= y;
    }
    REP(i, n){

    }
    return 0;
}