// 156-D

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>

using namespace std;


long long int RepeatSquaring(long long int n, long long int p){
    if(p == 0) return 1;
    if((p%2) == 0){
        long long int t = RepeatSquaring(n, p/2);
        return t*t;
    }
    return n * RepeatSquaring(n, p-1);
}

long long int kaizyou(long long int s, long long int e){
    long long int buf;
    if(s == e) return e;
    else{
        buf = kaizyou(s-1, e);   
    }
    return (buf*s);
}

int main(){
    long long int n, a, b;
    cin >> n >> a >> b;
    long long int buf = 1000000007;
    long long int sum = RepeatSquaring(2, n) - 1;
    cout << kaizyou(n, n-a+1) << " / " << RepeatSquaring(kaizyou(a, 1), buf-2) << endl;
    cout << (kaizyou(n, n-a+1)*RepeatSquaring(kaizyou(a, 1), buf-2))%buf << endl;
    cout << (kaizyou(n, n-b+1)*RepeatSquaring(kaizyou(b, 1), buf-2))%buf << endl;
    return 0;
}