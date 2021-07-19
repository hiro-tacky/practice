// 177

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int ans = INT_MAX;
    for(int i=0; i+t.length() <= s.length(); i++){
        int count = 0;
        for(int j=0; j<t.length(); j++){
            if(s.at(i+j) != t.at(j)) count++;
        }
        if(ans > count) ans = count;
    }
    cout << ans << endl;
    return 0;
}
