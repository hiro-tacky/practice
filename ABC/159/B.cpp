// ABC159 B

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    int len = str.size();
    for(int i=0; i<len; i++){
        if(str.at(i) != str.at(len-1-i)){
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i=0; i<(len-1)/2; i++){
        if(str.at(i) != str.at((len-1)/2 - 1 - i)){
            cout << "No" << endl;
            return 0;
        }
    }

    for(int i=0; i< (len-1)/2; i++){
        if(str.at((len+3)/2-1+i) != str.at(len-1-i)){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}