//貪欲法
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main(){
  long int sum=0;
  int n;
  vector<int> a;
  //input
  int tmp, step;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  sort(a.begin(), a.end());
  step = log2(n)+1;

  sum = accumulate(a.begin(), a.end(), 0) * step;
  cout << 2*n-pow(2, step) << endl;
  for(int i=0; i<(2*n-pow(2, step)); i++){
    sum += a[a.size()-1-i];
  }
  cout << sum << endl;
  return 0;
}
