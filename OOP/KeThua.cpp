#include <iostream>
using namespace std;

class Sinhvien{
public:
    string name;
    int age;

    void Nhap(){
        cout << "Nhập tên: ";
        getline(cin,name);
        cout << "Nhập tuổi: ";
        cin >> age;
    }

    virtual void In(){           // virtual : cho phép lớp con ghi đè hàm In()
        cout << "Tên của sinh viên là: " << name << endl;
        cout << "Tuổi của sinh viên là: " << age << endl;
    }

};

class Kethua : public Sinhvien{
public: 
    string major;

    void Nhapthem(){
        Nhap();
        cout << "Nghành: ";
        cin >> major;
    }

    void In() override{              // override : thông báo ghi đè hàm In() của lớp cha
        cout << "Nghành của sinh viên là: " << major << endl;
    }
};

int main(){
    Kethua a;
    a.Nhapthem();
    a.In();
}
 