#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Thủ tục nhập 3 cạnh                                Hàm thủ tục => Là hàm Void
void nhap(double &a, double &b, double &c) {
    cin >> a >> b >> c;
}

// Hàm tính chu vi
double chuvi(double a, double b, double c) {    
    return a + b + c;   
}

// Hàm tính diện tích
double dientich(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double a, b, c;
    nhap(a, b, c);
    double cv = chuvi(a, b, c);
    double dt = dientich(a, b, c);
    cout << fixed << setprecision(1) << cv << " ";
    cout << fixed << setprecision(3) << dt;
    return 0;
}