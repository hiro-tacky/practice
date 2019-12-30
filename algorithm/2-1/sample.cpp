#include <iostream>
#include <iomanip> //主力制御
#include <stdio.h>
#include <time.h>
#include <fstream>
#include <string>
#include <sstream>
#include <istream>

using namespace std;

int main(){
  // random_device rnd;
  string name;
  cout << "type file name:" << endl;
  cin >> name;
  ofstream ofs(name);
  // ファイルを正常に入力出来たか
  if(ofs.fail()){
    cout << "error" << endl;
    return 1;
  }
  for(int i=0; i<101; i++){
    // for(int j=0; j<101; j++){
      ofs << float(i)/100 << endl;
    // }
  }
}
