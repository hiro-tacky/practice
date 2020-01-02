#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
  int m, vv;
  cin >> m;
  if(m < 100){
    vv = 0;
  }else if(m >= 100 && m <= 5000){
    vv = m*10/1000;
  }else if(m >= 6000 && m <= 30000){
    vv = m/1000 + 50;
  }else if(m >= 35000 && m <= 70000){
    vv = (m/1000-30)/5 + 80;
  }else if(m >= 70000){
    vv = 89;
  }
  cout << setw(2) << setfill('0') << vv << endl;
}
