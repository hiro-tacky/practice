// ABC162 A

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i =0; i<3; i++){
        if(str.at(i) == '7'){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}