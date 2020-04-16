//  155 C
#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n, tmp=0;
    string buf;
    cin >> n;
    bool check;
    map<string, int> s;
    vector<string> s_max;
    for(int i=0; i<n; i++){
        cin >> buf;
        s[buf] += 1;
    }

    int max_v = 0;
    for(auto itr = s.begin(); itr != s.end(); itr++){
        if(max_v <= itr->second){
            max_v = itr->second;
        }
    }
    for(auto itr = s.begin(); itr != s.end(); itr++){
        if(itr->second == max_v) {cout << itr->first << endl;} 
    }
    return 0;
}