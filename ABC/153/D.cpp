// 153 A

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long int h, count=0, sum=0;
    cin >> h;
    while(h){
        h /= 2;
        sum += pow(2, count);
        count++;
    }
    cout << sum << endl;
    return 0;
}
