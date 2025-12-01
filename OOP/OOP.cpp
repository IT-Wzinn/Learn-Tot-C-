#include <iostream>
using namespace std;

class Sinhvien {
public:
    string name;
    int age;

/* Hàm Nhap() nếu không sài Hàm khởi ngay từ ban đầu để tạo để gán giá trị thuộc tính 
    void Nhap(){                        // Hàm khai báo bên trong, định nghĩa bên trong
    cout << "Nhập tên: ";
    getline(cin, name);                // Do chính đối tượng của lớp gọi hàm nội bộ nên hàm tự hiểu là a.name & a.age.
    cout << "Nhập tuổi: ";
    cin >> age;
}       
*/ 

// Hàm khởi tạo không có tham số                       Định nghĩa: Hàm khởi tạo là hàm chạy đầu tiên từ lúc tạo đối tượng
Sinhvien(){                                   
    cout << "Nhập tên: ";
    getline(cin, name);
    cout << "Nhập tuổi: ";
    cin >> age;
    cin.ignore();
}
         
// Hàm khởi tạo có tham số    
Sinhvien(string x, int y){        
    name = x;
    age = y;
}

void In();                 // Hàm khai báo bên trong, định nghĩa bên ngoài 
};

void Sinhvien::In(){                                           // Định nghĩa hàm In() bên ngoài Class
    cout << "Tên của Sinh viên: " << name << endl;
    cout << "Tuổi của Sinh viên: " << age << endl << endl;
}

int main(){
    Sinhvien a;             
    a.In();                

    Sinhvien b;
    b.In();

    Sinhvien c("Lư Quốc Vinh", 20);         
    c.In();

}

/* 
                                  Chú thích

| Loại     | Trong struct                       | Trong class                         |
| -------- | ---------------------------------- | ----------------------------------- |
|  Biến    | Biến thành viên                    | Thuộc tính                          |
|  Hàm     | Hàm thành viên                     | Phương thức                         |

Lưu ý:
Hàm được khai báo và định nghĩa trong Class phải khai báo đầy đủ: void Nhap(){...};
còn hàm được định nghĩa bên ngoài void Sinhvien::In(){} thì vẫn cần phải khai báo bên trong Class void In();
lưu ý là không có dấu {} vì có ngoặc nhọn là coi như đã định nghĩa rồi.


                                  Hàm khởi tạo (Constructor):
1) Không có tham số: 
Sinhvien(){                       
    name = "Unknown";
    age = 20;
    }                                     

2) Có tham số: 
Sinhvien(string x, int y){       
    name = x;
    age = y;
}
                                        
| Chức năng                                       | Giải thích ngắn                                                   |
| ----------------------------------------------- | ----------------------------------------------------------------- |
| 1. Khởi tạo giá trị ban đầu                     | Gán giá trị mặc định cho thuộc tính khi tạo đối tượng.            |
| 2. Gọi tự động khi đối tượng được tạo           | Không cần gọi thủ công, hệ thống tự kích hoạt.                    |
| 3. Có thể có nhiều constructor (nạp chồng)      | Giúp tạo đối tượng theo nhiều cách khác nhau.                     |
| 4. Dùng để cấp phát tài nguyên                  | Dành cho trường hợp cần khởi tạo con trỏ, mở file, cấp bộ nhớ,... |
| 5. Luôn chạy trước mọi hàm khác trong class     | Giúp đảm bảo đối tượng có dữ liệu hợp lệ trước khi dùng.          |

*/