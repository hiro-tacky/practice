//個数制限付部分和問題
#include <iostream>
#include <vector>

using namespace std;

#define n 3;
#define K 17;
vector<int> a{3, 5, 8};
vector<int> m{3, 2, 2};

int main(){
  vectoer<vector<bool>> dp(n+1, vector<bool>(k+1, false));
  dp.at(0).at(0) = true;
  for(int i=0; i<n; i++){
    for(int j=0; j<K; j++){
      for(int k=0; k <= m.at(i) && k*a.at(i) <= j; k++){
        dp.at(i+1).at(j) = dp.at(i).at(j-k*a.at(i));
      }
      cout << dp.at(i).at(j) << " ";
    }
    cout << endl;
  }
}
