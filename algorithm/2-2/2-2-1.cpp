//貪欲法
#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

string s, t, buf;

inline bool check(int i){
  for(int j=0; j<t.size(); j++){
    if(s[i+j] != t[j] && s[i+j] != '?') return false;
  }
  return true;
}

int main(){
  //input
  cin >> s >> t;
  int count=0;
  bool check_mark=false;

  for(int i=s.size()-t.size(); i>=0; i--){
    if(check(i)) {
      s.replace(i, t.size(), t);
      check_mark = true;
      break;
    }
  }
  if(!check_mark) {cout << "UNRESTORABLE" << endl; return 0;}

  for(int i=0; i<s.size(); i++){
    if(s[i] == '?') s[i] = 'a';
  }

  cout << endl << s << endl;
  return 0;
}
