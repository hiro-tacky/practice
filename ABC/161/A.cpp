// ABC160 A

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    if(str.at(2) == str.at(3) && str.at(4) == str.at(5)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}