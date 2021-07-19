//分割数

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
int n, m;

void show(vector<vector<int>> v){
  for(vector<int> buf1 : v){
    for(int buf2 : buf1){
      cout << buf2 << " ";
    }
    cout << endl;
  }
  cout << endl;
}

int func(){
    for(int i=1; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(j - i >= 0){
                dp.at(i).at(j) = (dp.at(i-1).at(j) + dp.at(i).at(j-i))%10000;
            }else{
                dp.at(i).at(j) = dp.at(i-1).at(j);
            }
            show(dp);
        }
    }
    return dp.at(m).at(n);
}

int main(){
    cin >> n >> m;
    dp = vector<vector<int>> (m+1, vector<int>(n+1));
    dp.at(0).at(0) = 1;
    cout << func() << endl;
}