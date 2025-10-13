#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    s[0] = toupper(s[0]);
    
    bool check = false;
    
    for(int i = 0; i < s.size(); i++){
        if(check){
            s[i] = toupper(s[i]);
            check = false;
        }
        
        if(s[i] == ' '){
            check = true;
        }
    }
    
    cout << s;

    return 0;
}
/* Dạng bài ĐÁNH DẤU ( Sài 2 điều kiện )
1 điều kiện để đánh dấu
1 điều kiện để thực hiện khi đã thỏa điều kiện
*/