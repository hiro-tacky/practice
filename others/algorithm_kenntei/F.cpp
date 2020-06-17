// D

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <utility>

using namespace std;

int main(){
    vector<string> str;
    int n;
    cin >> n;
    string buf, ans, rev, answ;
    for(int i; i<n; i++){
        cin >> buf;
        str.push_back(buf);
    }
    for(int i=0; i<(n/2); i++){
        bool check = false
        for(int j=0; j<n; j++){
            if(pos != str.at(i).find(str.at(n-i-1)[j]){
                ans.push_back(str.at(i).at(str.at(i).find(str.at(n-i-1)[j]-1));
                check = true;
                break;
            }
        }
        if(!check){
            cout << -1 << endl;
            return 0;
        }
    }
    if(n%2 == 0){
        answ = ans + reverse(ans.begin(), ans.end());
        cout << answ;
    }else{
        answ = ans + str.at(n/2)[0] + reverse(ans.begin(), ans.end());
        cout << answ;
    }
    return 0;
}
