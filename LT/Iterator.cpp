#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " " << endl;                             // Duyệt mảng bằng iterator 
    }

    for(auto it = v.rbegin(); it != v.rend(); it++){            // Duyệt ngược mảng bằng iterator
        cout << *it << " ";
    }

    for(auto it = a.begin(); it != a.end(); it++){              // Duyệt Set bằng iterator
        cout << *it << " ";                             
    }

    for(auto it = a.begin(); it != a.end(); it++){              // Duyệt Map bằng iterator
        cout << "Key: " << it->first << " value: " << it->second << endl;  
    }
return 0;
}   
                                       Lưu Ý

vector<int> a = {1,2,3,4,5,2,2,3,4,4,4};

1) Phần tử lớn nhất trong Container.
auto it = max_element(a.begin(), a.end());               // #include <algorithm>
cout << "Phần tử lớn nhất là: " << *it;

2) Phần tử nhỏ nhất trong Container.
auto it = min_element(a.begin(), a.end());                
cout << "Phần tử nhỏ nhất là: " << *it;

2) Vị trí của phần tử mình muốn biết.
int index = distance(a.begin(), it);
cout << "Vị trí: " << index;

2) Đếm số lượng của phần tử mình chọn trong Container xem nó có số lượng bao nhiêu.
vector<int> v = {1,2,3,4,5,2,2,3,4,4,4};
int a = count(v.begin(), v.end(), 2);                        // #include <algorithm>
cout << "Số lần xuất hiện của 2 là: " << cnt << endl;       // Số lần xuất hiện của 2 là: 3
