// 171

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

using namespace std;

int main(){
    int buf, tmp;
    for(int i=0; i<5; i++){
        cin >> buf;
        if(buf == 0){
            tmp = i+1;
        }
    }
    cout << tmp << endl;
    return 0;
}
