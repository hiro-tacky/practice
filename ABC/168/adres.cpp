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
#include <random>

using namespace std;
using ll = long long;

#define v_size 20;

void func(int **x, int **y){
    cout << "**x: " << **x << " " << **y << endl;
    cout << "*x:  " << *x << " " << *y << endl;
    int *tmp = *x;
    **y = *tmp;
    *tmp = 100;
}

int main(){
    int a=1, b=10;
    cout << "&a:  " << &a << " " << &b << endl;
    int *ap=&a, *bp=&b;
    cout << "*ap: " << *ap << " " << *bp << endl;
    cout << "&ap: " << &ap << " " << &bp << endl;
    int **app = &ap, **bpp = &bp;
    cout << "**app: " << **app << " " << **bpp << endl;
    cout << "&app: " << &app << " " << &bpp << endl;

    cout << "*app: " << *app << " " << *bpp << endl;
    cout << "app: " << app << " " << bpp << endl;
    func(&ap, &bp);
    cout << a << " " << b << endl;
    return 0;
}