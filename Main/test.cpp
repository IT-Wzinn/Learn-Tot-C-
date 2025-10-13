#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    string line;
    getline(cin, line);

    stringstream ss(line);
    string s;

    while(ss >> s){
       reverse(s.begin(), s.end());
       cout << s << " ";
    }

    cout << line;
    
    return 0;
}
