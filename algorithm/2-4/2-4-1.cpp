//expedition
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int l = 25;
    int p = 10; 
    int n = 4;
    vector<int> a{10, 14, 20, 21};
    vector<int> b{10, 5, 2, 4};
    a.push_back(l);
    b.push_back(0); 
    
    priority_queue<int> queue;
    int ans = 0; //補給回数
    int pos = 0; //今いる場所
    int tank = p; //タンクのガソリンの量

    for(int i = 0; i<n; i++){
        int d = a.at(i) - pos;
        while(tank - d < 0){
            if(queue.empty()){
                cout << "-1" << endl;
                return 0;
            }
            tank += queue.top();
            queue.pop();
            ans++;
        }
        tank -= d;
        pos = a.at(i);
        queue.push(b.at(i));
    }
    cout << ans << endl;
}