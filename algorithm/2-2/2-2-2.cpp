//貪欲法
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> s;

bool check_kyoto(int i, int j){
  if(s.at(i).at(j-4) != 'k') return false;
  if(s.at(i).at(j-3) != 'y') return false;
  if(s.at(i).at(j-2) != 'o') return false;
  if(s.at(i).at(j-1) != 't') return false;
  if(s.at(i).at(j) != 'o') return false;
  return true;
}

bool check_tokyo(int i, int j){
  if(s.at(i).at(j-4) != 't') return false;
  if(s.at(i).at(j-3) != 'o') return false;
  if(s.at(i).at(j-2) != 'k') return false;
  if(s.at(i).at(j-1) != 'y') return false;
  if(s.at(i).at(j) != 'o') return false;
  return true;
}

int main(){
  //input
  int t, count;
  cin >> t;
  string tmp;
  for(int i=0; i<t; i++){
    cin >> tmp;
    s.push_back(tmp);
  }

  //processing
  for(int i=0; i<t; i++){
    count = 0;
    for(int j=4; j<s.at(i).size(); j++){
      if(check_kyoto(i, j) || check_tokyo(i, j)) {
        count++;
        if(j > s.at(i).size()-4) break;
        else j += 4;
      }
    }
    cout << count << endl;
  }
  return 0;
}
