#include <iostream>
#include <random>
#include <vector>
#include <time.h>

using namespace std;
#define N 20 //乱数数列の要素数

bool dfs(int i, int sum, int k, vector<int> a){
  if(i == (N-1)) return sum == k;

  if (dfs(i+1, sum, k, a)) return true;

  if (dfs(i+1, sum+a[i], k, a)) return true;

  return false;
}

int main(){
  //乱数数列生成
  mt19937 mt((unsigned int)time(NULL));
  uniform_int_distribution<> rand_que(0, 20); //乱数数列の乱数の値域
  vector<int> a;
  for(int i = 0; i<N; i++){
    a.push_back(rand_que(mt));
  }
  vector<int>::iterator itr = a.begin();

  //乱数生成
  uniform_int_distribution<> rand_int(0, 49);
  int k = rand_int(mt);

  for(; itr != a.end(); itr++){
    cout << *itr << " ";
  }
  cout << endl << k << endl;
  cout << dfs(0, 0, k, a) << endl;
  return 0;
}
