#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <random>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <complex>
#include <cmath>

using namespace std;

void func(int r, int b){
    for(int i=1; i<10; i++){
        long double s = i*0.1;
        cout << 1 - pow(1-pow(s, r), b) << " ";
    }
    cout << endl;
}

int main(){
    func(3, 10);
    func(6, 20);
    func(5, 50);
}