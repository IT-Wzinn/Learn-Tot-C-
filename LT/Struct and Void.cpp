#include <iostream>
#include <vector>
using namespace std;

// Định nghĩa struct SinhVien
struct SinhVien {
    string hoTen;
    int tuoi;
    double diemTB;
};

// Hàm void để nhập 1 sinh viên từ bàn phím
void nhapSinhVien(SinhVien &sv) {
    cout << "Nhap ho ten: ";
    getline(cin, sv.hoTen);        // Nhập chuỗi có khoảng trắng
    cout << "Nhap tuoi: ";
    cin >> sv.tuoi;
    cout << "Nhap diem trung binh: ";
    cin >> sv.diemTB;
    cin.ignore(); // Xóa '\n' còn sót lại trong bộ đệm
}

// Hàm void để in thông tin 1 sinh viên
void inThongTin(const SinhVien &sv) {
    cout << "Ho ten: " << sv.hoTen 
         << ", Tuoi: " << sv.tuoi 
         << ", Diem TB: " << sv.diemTB << endl;
}

// Hàm void để in danh sách sinh viên
void inDanhSach(const vector<SinhVien> &ds) {
    cout << "\nDanh sach sinh vien:\n";
    for (int i = 0; i < ds.size(); i++) {
        cout << "Sinh vien " << i + 1 << ": ";
        inThongTin(ds[i]);
    }
}

int main() {
    int soLuong;
    cout << "Nhap so luong sinh vien: ";
    cin >> soLuong;
    cin.ignore();  // Tránh lỗi getline bị bỏ qua

    vector<SinhVien> danhSach;

    for (int i = 0; i < soLuong; i++) {
        SinhVien sv;
        cout << "\nNhap thong tin cho sinh vien thu " << i + 1 << ":\n";
        nhapSinhVien(sv);          // Gọi hàm void để nhập
        danhSach.push_back(sv);    // Thêm vào danh sách
    }

    inDanhSach(danhSach);          // Gọi hàm void để in danh sách

    return 0;
}
