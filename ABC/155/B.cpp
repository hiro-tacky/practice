// 155 B

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, tmp;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tmp;
        if(tmp % 2 == 1){
            continue;
        }else{
            if(tmp % 3 == 0 || tmp % 5 == 0){
                continue;
            }else{
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }
    cout << "APPROVED" << endl;
    return 0;
}