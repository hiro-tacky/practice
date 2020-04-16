// ABC161 D

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    long long int k;
    cin >> k;
    vector<vector<long long int>> dp(1, vector<long long int>(10, 1));
    string anw;
    if(k <= 9) {
        cout << k << endl;
        return 0;
    }
    long long int sum = 9, digit = 1, tmp = 0, p = 0, q = 0;
    bool check = false;
    while(sum < k){
        dp.push_back(vector<long long int> (10, 0));
        // 0
        dp.at(digit).at(0) = dp.at(digit-1).at(0) + dp.at(digit-1).at(1);
        // 1-8
        for(long long int i = 1; i < 9; i++){
            tmp = dp.at(digit-1).at(i-1) + dp.at(digit-1).at(i) + dp.at(digit-1).at(i+1);
            if(sum + tmp >= k) {
                check = true;
                p = i;
                break;
            }
            sum += tmp;
            dp.at(digit).at(i) = tmp;
        }
        if(check) break;
        // 9
        tmp = dp.at(digit-1).at(8) + dp.at(digit-1).at(9);
        if(sum + tmp >= k) {
            p = 9;
            break;
        }
        sum += tmp;
        dp.at(digit).at(9) = tmp;
        // next loop judge
        digit++;
    }
    //anw
    anw = to_string(p);
    for(int i = (digit-1); i >= 0; i--){
        for(int j = -1; j<2; j++){
            if(p+j == 10){
                break;
            }
            if(sum + dp.at(i).at(p+j) >= k){
                anw += to_string(p+j);
                p = p + j;
                break;
            }
            sum += dp.at(i).at(p+j);
        }
    }
    cout << anw << endl;
    return 0;
}