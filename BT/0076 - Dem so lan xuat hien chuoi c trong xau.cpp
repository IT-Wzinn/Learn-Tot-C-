#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    string x,s = "Hello";
    getline(cin,x);
      
    size_t pos = 0;
    int count = 0;

    while( ( pos = s.find(x,pos) ) != string::npos){
         count++;
         pos += 1;      // Hoặc nếu không muốn tính trùng thì pos += x.size;
    }
        cout << count;
}
