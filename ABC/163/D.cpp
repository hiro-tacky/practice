// 154 B

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include<algorithm>

using namespace std;

int main(){
    long long int n, k, sum=0, tmp;
    cin >> n >> k;
    for(int i=k; i<=n+1; i++){
        sum += ((n-i+1)*i+1)%1000000007;
        if(sum > 1000000007) sum %= 1000000007;
    }
    cout << sum << endl;
    return 0;
}
