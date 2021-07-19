// 179

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <string>
#include <cmath>
#include <utility>

using namespace std;
using ll = long long int;
using p_d = pair<double, double>;

double func(double x_1, double x_2){
    return x_1*x_1 + 4*x_2*x_2 - 2*x_1;
}

p_d func_diff(p_d x_k){
    p_d buf;
    buf.first = 2*x_k.first - 2;
    buf.second = 8*x_k.second;
    return buf;
}

p_d newton_direction(p_d x_k){
    p_d d_k;
    d_k.first = -func_diff(x_k).first/2;
    d_k.second = -func_diff(x_k).second/8;
    return d_k;
}

bool optimality_decision(p_d x_k){
    cout << sqrt(pow(1-x_k.first, 2)+pow(x_k.second, 2)) << endl;
    if(sqrt(pow(1-x_k.first, 2)+pow(x_k.second, 2)) < 0.0001) return true;
    else return false;
}

int main(){
    int k=0;
    p_d x_k(0, 1), d_k(0, 0);
    while(k<10){
        optimality_decision(x_k);
        cout << "x_1: " << x_k.first << "    x_2: " << x_k.second << endl;
        cout << "d_1: " << d_k.first << "    d_2: " << d_k.second << endl << endl;
        d_k = newton_direction(x_k);
        x_k.first = x_k.first + d_k.first;
        x_k.second = x_k.second + d_k.second;
        k++;
    }
    return 0;
}