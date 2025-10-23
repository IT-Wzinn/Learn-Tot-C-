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

    vector<string> v;
    while(ss >> s){
       reverse(s.begin(), s.end());
       v.push_back(s);
    }
    for(string s : v){
        cout << s << " ";
    }
}