// 156-D

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

long int RepeatSquaring(long int n, long int p, long int m){
    if(p == 0) return 1;
    if(p%2 == 0){
        long int t = RepeatSquaring(n, p/2, m);
        return t*t % m;
    }
    return n * RepeatSquaring(n, p-1, m);
}

long int kaizyou(long int s, long int e, long int m){
    long int buf;
    if(s == e) return e;
    else{
        buf = kaizyou(s-1, e, m);   
    }
    return (buf*s)%m;
}

long int x_y(long int n, long int a, long int m){
    long int x = kaizyou(n, n-a+1, m);
    long int y = RepeatSquaring(kaizyou(a, 1, m), m-2, m);
    return (x*y)%m;
}

int main(){
    long int n, a, b;
    cin >> n >> a >> b;
    long int buf = 1000000007;
    long int sum = RepeatSquaring(2, n, buf) - 1;
    cout << RepeatSquaring(2, n, buf) - 1 << endl;
    cout << x_y(n, a, buf) << endl;
    cout << x_y(n, b, buf) << endl;
    cout << sum - x_y(n, a, buf) - x_y(n, b, buf) << endl;
    return 0;
}