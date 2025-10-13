#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ===== MẢNG =====
  **int a1[5];                  // Mảng 3 phần tử, giá trị rác
    int a2[] = {1, 2, 3};       // Mảng 3 phần tử, tự suy luận kích thước
    int a3[1000] = {0};         // Mảng 1000 phần tử, tất cả = 0
    // int a4[n];              // VLA, không chuẩn C++, có thể lỗi  
    int a5[10][20];             // Mảng 2 chiều 10 x 20

    // ===== VECTOR 1 CHIỀU =====
    vector<int> v1;                     // Vector rỗng
  **vector<int> v2(5);                  // Vector 5 phần tử, tất cả = 0
    vector<int> v3(5, 3);               // Vector 5 phần tử, tất cả = 3
    vector<int> v4 = {1, 2, 3};         // Khởi tạo bằng danh sách
    // vector<int> v5();               // ❌ Không tạo vector — đây là hàm trả về vector!

    // ===== VECTOR MẢNG =====
    vector<int> v6[10];                 // Mảng 10 vector<int>

    // ===== VECTOR 2 CHIỀU =====
    vector<vector<int>> v7;                          // Vector 2 chiều rỗng
    vector<vector<int>> v8(3);                       // Vector 2 chiều có 3 hàng, mỗi hàng rỗng
    vector<vector<int>> v9(3, vector<int>(4));       // Ma trận 3 x 4, tất cả phần tử = 0
    vector<vector<int>> v10(2, vector<int>(5, 7));   // Ma trận 2 x 5, tất cả phần tử = 7

    return 0;
}

                                                    Tóm gọn 
int a[n] : Tạo mảng a với n phần tử RÁC
vector<int> a(n); Tạo vector a với n phần tử = 0
vector<int> a[n]; Tạo n vector a