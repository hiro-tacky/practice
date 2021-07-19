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
using p = pair<long long int, long long int>;
#define REP(i, n) for(long long int i=0; i<n; i++)
#define NUM 1000000007
#define Y_N(b) if(b){cout << "Yes" << endl;}else{cout << "No" << endl;}

int main(){
    ll n;
    string s;
    cin >> n >> s;
    REP(i, s.size()){
        if(s.at(i) == '1'){
            if(i % 2 == 0){
                cout << "Takahashi" << endl; 
            }else{
                cout << "Aoki" << endl;
            }
            return 0;
        }
    }
    return 0;
}
