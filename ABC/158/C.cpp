// ABC159 C

#include <iostream>

using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    for(int i=1; i<1010; i++){
        if(a*100/8 <= i && i < (a+1)*100/8 && b*10 <= i && i < (b+1)*10){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}