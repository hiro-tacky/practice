//ABC171

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
    long int n, tmp;
    cin >> n;
    vector<int> v;
    while(true){
        if(n <= 26){
            v.push_back(n);
            break;
        }else{
            if(n % 26 == 0){
                v.push_back(26);
                n = n/26 - 1;
            }else{
                v.push_back(n%26);
                n /= 26;
            }
        }
    }
    reverse(v.begin(), v.end());
    for(auto itr = v.begin(); itr != v.end(); itr++){
        char c = 'a' + *itr - 1;
        cout << c;
    }
    cout << endl;
    return 0;
}