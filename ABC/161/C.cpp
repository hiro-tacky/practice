// ABC161 C

#include <iostream>
#include <complex>

using namespace std;

int main(){
    long long int n, k;
    cin >> n >> k;
    long long int count = n/k;
    long long int buf_0, buf_1;
    buf_0 = abs(n - k*count);
    buf_1 = abs(n - k*(count+1));   
    if(buf_0 < buf_1) cout << buf_0 << endl;
    else cout << buf_1 << endl;
    return 0;
}