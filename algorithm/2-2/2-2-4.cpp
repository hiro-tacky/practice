//貪欲法
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double x, y;

int main(){
  //input
  cin >> x >> y;
  cout << int(log2(y/x))+1 ;
  return 0;
}
