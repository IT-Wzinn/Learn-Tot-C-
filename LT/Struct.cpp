#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Định nghĩa struct SinhVien
struct Sinhvien{
    string name;
    int age;
    double point;
};

int main(){
    // Khai báo một sinh viên cụ thể
    Sinhvien sv1;
    sv1.name = "Nguyen Van A";      // Gán tên
    sv1.age = 20;                    // Gán tuổi
    sv1.point = 8.5;                 // Gán điểm trung bình

    // In thông tin sinh viên sv1
    cout << "Thong tin sinh vien 1:" << endl;
    cout << "Ho ten: " << sv1.name << endl;
    cout << "Tuoi: " << sv1.age << endl;
    cout << "Diem TB: " << sv1.point << endl;

    // Tạo danh sách nhiều sinh viên
    vector<Sinhvien> Danhsach;

    // Thêm sinh viên vào danh sách
    Danhsach.push_back(sv1);  // Thêm sv1 vào cuối vector

    // Tạo thêm sinh viên khác và thêm vào danh sách
    Danhsach.push_back({"Le Thi B", 19, 7.8});
    Danhsach.push_back({"Tran Van C", 21, 9.0});

    cout << "\nDanh sách sinh viên:\n";
    for (int i = 0; i < Danhsach.size(); i++) {
        cout << "Sinh viên " << i + 1 << ": ";
        cout << Danhsach[i].name << ", " 
             << Danhsach[i].age << " tuổi, Điểm TB: " 
             << Danhsach[i].point << endl;
    }

// Lambda Function

    // Sắp xếp danh sách sinh viên theo điểm TB giảm dần
    cout << "\nSắp xếp theo điểm TB giảm dần:\n";
    sort(Danhsach.begin(), Danhsach.end(), [](Sinhvien a, Sinhvien b) {          
        return a.point > b.point;  // So sánh giảm dần
    });

    for (Sinhvien sv : Danhsach) {
        cout << sv.name << " - " << sv.point << endl;
    }
}