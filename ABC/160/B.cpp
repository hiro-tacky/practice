// ABC160 B

#include <iostream>
#include <string>

using namespace std;

int main(){
    long int sum = 0, anw = 0;
    cin >> sum;
    while(sum >= 500){
        sum -= 500;
        anw += 1000;
    }
    while(sum >= 5){
        sum -= 5;
        anw += 5;
    }
    cout << anw << endl;
    return 0;
}