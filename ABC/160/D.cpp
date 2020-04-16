// ABC160 D

#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>
#include <algorithm>
#include <functional>


using namespace std;

int main(){
    int n, x, y, buf;
    cin >> n >> x >> y;
    vector<long int> anw(n-1, 0); 
    for(int i = 1; i < n+1; i++){
        for(int j = i+1; j < n+1; j++){
            buf = min({j-i, abs(x-i)+1+abs(y-j), abs(y-i)+1+abs(x-j)});
            // cout << i << "<-i  j->" << j << "  dis:" << buf << endl;
            anw[buf-1]++;
        }
    }
    vector<long int>::iterator itr;
    for(itr = anw.begin(); itr != anw.end(); itr++){
        cout << *itr << endl;
    }
    return 0;
}