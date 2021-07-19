//個数制限付き部分和問題

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

using namespace std;
using ll = long long int;
using p = pair<int, int>;
#define NUM 1000000007

vector<vector<int>> dp;
vector<pair<int, int>> wv;//first:value second:weight
int n, k;

void show(vector<vector<int>> v){
  for(vector<int> buf1 : v){
    for(int buf2 : buf1){
      cout << buf2 << " ";
    }
    cout << endl;
  }
}

bool func(){
    for(int i=1; i<=n; i++){
        for(int j=0; j<=k; j++){
            if(dp.at(i-1).at(j) >= 0){
                dp.at(i).at(j) = wv.at(i-1).second;
            }else if(j<wv.at(i-1).first || dp.at(i).at(j - wv.at(i-1).first) <= 0){
                dp.at(i).at(j) = -1;
            }else{
                dp.at(i).at(j) = dp.at(i).at(j - wv.at(i-1).first) - 1;
            }
        }
    }
    show(dp);
    if(dp.at(n).at(k) >= 0) return true; else return false;
}

int main(){
    cin >> n >> k;
    wv = vector<pair<int, int>> (n, pair<int, int>());
    for(int i=0; i<n; i++){
        cin >> wv.at(i).first;
    }
    for(int i=0; i<n; i++){
        cin >> wv.at(i).second;
    }

    dp = vector<vector<int>> (n+1, vector<int>(k+1, -1));
    dp.at(0).at(0) = 0;
    cout << func() << endl;
}
