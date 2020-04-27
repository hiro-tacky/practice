// 154 B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    for(int i=0; i<b; i++){
        cout << a;
    }
    cout << endl;
    return 0;
}
