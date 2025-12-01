#include <iostream>
using namespace std;

class Nhanvien{
private:
    int salary;                     // Private chỉ có thể được hàm nằm chung Class hoặc HÀM BẠN truy cập 

public:
    void Setsalary(){
        cout <<"Nhập lương cho nhân viên: ";
        cin >> salary;                                 // Nếu tạo điều kiện cho salary thì truyền 1 biến tham số khác vào hàm Set(), cho vào if xong rồi cho salary = x;
    }
    
    void Getsalary(){
        cout << "Lương của nhân viên là: " << salary;
    }

};

int main(){
    Nhanvien a;     
    a.Setsalary();            // Chỉ có thể chỉnh sửa giá trị thông qua qua Hàm 
    a.Getsalary();           // Chỉ có thể in lương của nhân viên thông qua Hàm
}


/* 
Khái niệm Đóng Gói (Encapsulation):
Là việc ẩn dữ liệu bên trong class (private) và chỉ cho phép truy cập thông qua các hàm (public) cùng Class
==> Mục đích: Bảo vệ dữ liệu, tránh bị chỉnh sửa sai cách.

Nếu salary là public → có thể làm a.salary = -100; (lỗi logic)
Nhưng khi salary là private → Chỉ có thể gán qua Setsalary() nhằm đảm bảo an toàn và ta có thể thêm kiểm tra điều kiện để đảm bảo dữ liệu hợp lệ.

Thêm điều kiện cho salary
public:
    void Setsalary(int x){
        cout <<"Nhập lương cho nhân viên: ";
        cin >> x;
        if(x <= 0) cout << "Nhập lương bị lỗi";
        else salary = x;
    }

*/