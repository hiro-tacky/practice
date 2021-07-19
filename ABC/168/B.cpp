// 69

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
using ll = long long;


int main(){
    int k;
    string str;
    cin >> k >> str;
    for(int i=0; i<str.length(); i++){
        if(i<k){
            cout << str.at(i);
        }else{
            cout << "...";
            break;
        }
    }
    return 0;
}
