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
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

vector<vector<ll>> v;

int main(){
    vector<int> v(4);
    char buf;
    REP(i, 4){
        cin >> buf;
        v.at(i) = buf - '0';
    }
    bool c = false;
    REP(i, 3){
        if(v.at(i) != v.at(i+1)) c = true;
    }
    if(!c) {cout << "Weak" << endl; return 0;}
    c = false;
    REP(i, 3){
        if(!(v.at(i+1) == v.at(i) + 1 || (v.at(i+1) == 0 && v.at(i) == 9))) {c = true;}
    }
    if(c) {cout << "Strong" << endl;} else {cout << "Weak" << endl;}
    return 0;
}

