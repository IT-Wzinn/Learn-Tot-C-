#include<iostream>
#include<vector>
#include<map>
#include<sstream>
#include<algorithm>

using namespace std;
int main(){
    string s;
    getline(cin, s);
    
    map<char,int> m;
    vector<char> v;

    for(char C : s){
        char c = tolower(C);
        m[c]++;
        if(find(v.begin(), v.end(), c) == v.end()){
             v.push_back(c);
        }
    }

    for(char c : v){
        cout << "Kí tự: " << c << " Số lần xuất hiện: " << m[c] << endl;
    }
    return 0;
}

/*
Thay vì kiểm tra c đã có trong Map hay chưa thì có thể kiểm tra xem c đã có trong Vector hay chưa nếu chưa có thì thêm vào Vector:
for(char C : s){
        char c = tolower(C);
        if(m.find(c) == m.end()){
            v.push_back(c);
        }
        m[c]++;
    }
*/