// 156-B

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n, k; 
    cin >> n >>k;

    string ans;
    while(n >= k){
        ans = to_string(n % k) + ans;
        n /= k;
    }
    ans = to_string(n % k) + ans;
    cout << ans.size() << endl;
    return 0;
}