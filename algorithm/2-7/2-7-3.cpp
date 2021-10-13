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
    int p = 20, q = 3;
    vector<int> a = {3, 6, 14}, v;
    a.insert(a.begin(), 0);
    a.push_back(p+1);
    for(int i=1; i<a.size(); i++){
        v.push_back(a.at(i) - a.at(i-1));
    }
    return 0;
}