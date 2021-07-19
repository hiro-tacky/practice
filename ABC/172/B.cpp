// 171

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    string s, t;
    cin >> s;
    cin >> t;
    long int count=0;
    for(int i=0; i<s.size(); i++){
        if(s.at(i) != t.at(i)) count++;
    }
    cout << count << endl;
    return 0;
}
