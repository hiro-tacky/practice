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
    int x, y;
    cin >> x >> y;
    for(int i=0; i<=x; i++){
        if(y == (i*2 + (x-i)*4)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
