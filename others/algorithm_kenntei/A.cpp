// A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>

using namespace std;

int main(){
    string s, t;
    cin >> s;
    cin >> t;
    if(s == t){
        cout << "same" << endl;
    }else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        transform(t.begin(), t.end(), t.begin(), ::toupper);
        if(s == t){
            cout << "case-insensitive" << endl;
        }else{
            cout << "different" << endl;
        }
    }
    return 0;
}
