#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    
    vector<int> a = {1, 2, 3, 4, 5};
    cout << "Số lượng ptu: " << a.size() << endl;
    cout << "Kích thước: " << sizeof(a) << endl;
    cout << "Phần tử đầu: " << a.front() << endl;
    cout << "Phần tử cuối: " << a.back() << endl;
    cout << "Kiểm tra vector có rỗng hay không: " << a.empty() << endl; // Xuất ra 0 nếu false 1 nếu true

    cout << "Sắp xếp vector b theo thứ tự từ nhỏ tới lớn: " << endl;
    sort(a.begin(), a.end());
    for (int i : a){
        cout << i << " ";
    }

    cout << endl;

    cout << "Đảo ngược vector: " << endl;
    reverse(a.begin(), a.end());
    for (int i : a){
        cout << i << " ";
    }
}

                              Lưu Ý

1) substr
s.substr(pos) : Xóa phần tử trước pos
s.substr(pos, n) : Lấy n phần tử từ vị trí pos

2) erase
s.erase(pos) : Xóa phần tử sau pos
s.erase(pos, n) : Xóa n phần tử từ vị trí pos

==> Sub và Erase dùng được cả trên string



vector
a.push_back(n);    Thêm phần tử vào cuối
a.pop_back(n);     Xóa phần tử ở cuối

Còn deque thì: 
deque<int> d;
d.push_back(1);  // Thêm vào cuối
d.pop_back(1);    // Xóa cuối
d.push_front(2); // Thêm vào đầu
d.pop_front(2);   // Xóa đầu