#include <iostream>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    int i = 0;
    
    while(i < s.size() && s[i] == ' '){
        i++;
    }

    //Xóa i phần tử đầu: 
    s = s.substr(i);
    cout << s << endl; 


    
    // Xóa các khoảng trắng ở cuối câu 
    string b;
    getline(cin, b);
    int j = b.size() - 1;
    
    while(j >= 0 && b[j] == ' '){
        j--;
    }
    
    b = b.substr(0, j + 1);
    cout << b;
}