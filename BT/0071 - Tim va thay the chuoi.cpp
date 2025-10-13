#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    char x,y;
    cin >> x >> y;

    string result = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == x){
            result += y;
            continue;
        }
        result += s[i];
    }

    cout << result;
     
    return 0;
}



//   10 /10


#include <iostream>
using namespace std;

int main() {
    string s, x, y;
    getline(cin, s);
    getline(cin, x);
    getline(cin, y);

    string result = "";
    for (size_t i = 0; i < s.size(); ) {
        if (s.substr(i, x.size()) == x) {    // Từ vị trí i cắt ra được độ dài x.size nếu trùng với x thì thay thế thành y còn không thì i++
            result += y;
            i += x.size();
        } else {
            result += s[i];
            i++;
        }
    }

    cout << result;
    return 0;
}
