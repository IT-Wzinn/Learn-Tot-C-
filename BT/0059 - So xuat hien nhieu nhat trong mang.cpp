#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    map<int,int> m;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        m[v[i]]++;
    }

    int a = v[0];
    int max = m[a];

    for(int i = 0; i < n; i++){
        if(max < m[v[i]]){
            max = m[v[i]];
            a = v[i];
        }
    }

    cout << "Số xuất hiện nhiều nhất là: " << a << " với số lần " << max;
    
}