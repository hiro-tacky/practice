// ABC160 C

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int k, n, tmp;
    cin >> k >> n;
    long int anw, dis, buf;
    vector<int> houses;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        houses.push_back(tmp);
    }
    dis = houses.back() - houses.front();
    anw = dis;

    for(int i = 0; i < n; i++){
        houses.push_back(houses.at(i) + k);
    }

    for(int i = 1; i < n; i++){
        buf = dis - (houses.at(i) - houses.at(0)) + (houses.at(n + i -1) - houses.at(n-1));
        if(buf < anw) anw = buf;
    }
    cout << anw << endl;
    return 0;
}