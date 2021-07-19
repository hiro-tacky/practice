//ABC150

#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <complex>
#include <string>

using namespace std;

int main(){
    int n, count=0;
    string s;
    cin >> n;
    cin >> s;
    int pos = s.find("ABC");
    while(pos != string::npos){
        pos = s.find("ABC", pos + 3);
        count++;
    }
    cout << count << endl;
    return 0;
}