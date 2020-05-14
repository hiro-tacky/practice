// 154 B

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
    long long int x, y=100, count = 0;
    cin >> x;
    while(y < x){
        y *= 1.01;
        count++;
    }
    cout << count << endl;
    return 0;
}