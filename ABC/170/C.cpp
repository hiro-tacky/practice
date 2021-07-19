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
#include <cmath>

using namespace std;

int main(){
    int x, n;
    cin >> x >> n;
    
    if(n == 0){
        cout << x << endl;
        return 0;
    }

    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin >> p.at(i);
    }
    
    for(int i=0; i<=n; i++){
        int min_buf = x-i, max_buf = x + i;
        bool c = true;
        for(int n: p){
            if(min_buf == n){
                c = false;
                break;
            }
        }
        if(c){
            cout << min_buf << endl;
            return 0;
        }

        c = true;
        for(int n: p){
            if(max_buf == n){
                c = false;
                break;
            }
        }
        if(c){
            cout << max_buf << endl;
            return 0;
        }
    }
    
    return 0;
}
