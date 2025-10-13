#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main(){
    map<int,string> m;
    m[5] = "five";
    m[2] = "two";
    m[8] = "eight";
    m[1] = "one";
    m[4] = "four";

    cout << "Các phần tử trong map (tự động sắp xếp theo key): " << endl;
    for(auto i : m){
        cout << i.first << ": " << i.second << endl;        // map tự sắp xếp thứ tự theo thứ thứ tự của key
    }
}