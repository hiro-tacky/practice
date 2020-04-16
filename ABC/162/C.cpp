// ABC162 C

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int k_num, buf;
    long long int sum = 0;
    cin >> k_num;
    for(int i = 1; i <= k_num; i++){
        for(int j = 1; j <= k_num; j++){
            for(int k = 1; k <= k_num; k++){
                buf = __gcd(j, k);
                // cout << __gcd(buf, i) << endl;
                sum += __gcd(buf, i);
            }
        }
    }
    cout << sum << endl;
    return 0;
}