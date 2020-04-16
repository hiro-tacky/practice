// ABC159 D

#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int n, tmp, sum = 0;
    cin >> n;
    vector <long long int> a, num_list(n, 0);
    for(int i=0; i<n; i++){
        cin >> tmp;
        a.push_back(tmp);
        num_list.at(tmp-1)++;
    }

    for(int i=0; i<n; i++){
        sum += num_list.at(i)*(num_list.at(i)-1)/2;
    }

    for(int i=0; i<n; i++){
        tmp = a.at(i);
        cout << sum - num_list.at(tmp-1) + 1 << endl;
    }
    return 0;
}