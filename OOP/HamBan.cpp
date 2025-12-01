#include <iostream>
using namespace std;

class Nhanvien{
private:
    int salary;

public:
    Nhanvien(){                                 
        cout << "Nhập lương: ";
        cin >> salary;
        cout << "Lương của nhân viên là: " << salary << endl;
    }

    friend void TangLuong(Nhanvien &a);   // Chỉ là hàm bên ngoài được mời vào Class nên phải tự truyền tham số Sinhvien &a 
};

void TangLuong(Nhanvien &a) {          
    a.salary  = 2;   
    cout << "Lương sau khi tăng: " << a.salary << endl;
}

int main() {
    Nhanvien a;
    TangLuong(a);     
}

/*                                           So sánh Hàm thành viên và Hàm bạn

| Tiêu chí                       |  Hàm thành viên (định nghĩa ngoài)        |  Hàm bạn (friend)                                                               |
| ------------------------------ | ----------------------------------------- | ------------------------------------------------------------------------------- |
|  Thuộc lớp nào                 | Thuộc  duy nhất một class  (nơi khai báo) | Không thuộc class nào, chỉ được “mời” vào dùng tạm                              |
|  Truy cập private/protected    | Có thể truy cập  trong class của nó       | Có thể truy cập  vào nhiều class  nếu được khai báo `friend` trong từng class   |
|  Cách gọi                      | `a.In()` — phải có đối tượng gọi          | `TangLuong(a)` — gọi như hàm bình thường                                        |
|  Số lớp truy cập được          | Chỉ  1  (lớp sở hữu nó)                   | Có thể  nhiều lớp khác nhau  nếu được khai báo `friend` trong các lớp đó        |
                                                                             | Có thể là nhiều class nếu được khai báo  friend  trong nhiều class              |
Tóm lại:
Hàm bạn không thuộc lớp nào, nhưng có thể “thâm nhập” nhiều lớp.
Hàm thành viên là người trong nhà, nhưng chỉ trong một nhà duy nhất.
*/