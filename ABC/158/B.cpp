// ABC159 B

#include <iostream>

using namespace std;

int main(){
    long long int n, a, b, anw = 0, tmp;
    cin >> n >> a >> b;
    anw += (n/(a+b)) * a;
    tmp = n%(a+b);
    if(tmp > a) anw += a;
    else anw += tmp;
    cout << anw << endl;
    return 0;
}