// ABC162 B

#include <iostream>
#include <string>

using namespace std;

int main(){
    long int n;
    cin >> n;
    long long int sum = 0;
    for(int i = 1; i <= n; i++){
        if((i%3) != 0 && (i%5) != 0) sum += i;
    }
    cout << sum << endl;
    return 0;
}