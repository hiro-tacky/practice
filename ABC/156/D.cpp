// 156-D

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>

using namespace std;


long long int RepeatSquaring(long long int n, long long int p, long long int m){
    if(p == 0) return 1;
    if((p%2) == 0){
        long long int t = RepeatSquaring(n, p/2, m);
        // cout << t*t % m;
        return (t*t) % m;
    }
    // cout <<  n * RepeatSquaring(n, p-1, m) << endl;
    return n * RepeatSquaring(n, p-1, m);
}

long long int kaizyou(long long int s, long long int e, long long int m){
    long long int buf;
    if(s == e) return e;
    else{
        buf = kaizyou(s-1, e, m);   
    }
    return (buf*s)%m;
}

long long int x_y(long long int n, long long int a, long long int m){
    long long int x = kaizyou(n, n-a+1, m);
    // cout << x << endl;
    long long int y = RepeatSquaring(kaizyou(a, 1, m), m-2, m);
    // cout << y << endl;
    return (x*y)%m;
}

int main(){
    long long int n, a, b;
    cin >> n >> a >> b;
    long long int buf = 1000000007;
    long long int sum = RepeatSquaring(2, n, buf) - 1;
    if(n/a < 2) a = (n-a);
    if(n/b < 2) b = (n-b);
    cout << x_y(n, a, buf) << endl << endl;
    cout << x_y(n, b, buf) << endl;
    cout << sum << endl;
    return 0;
}