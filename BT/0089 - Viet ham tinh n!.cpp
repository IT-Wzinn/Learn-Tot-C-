#include <iostream>
using namespace std;

// Hàm tính giai thừa
int Factorial(int n){
    if(n <= 0){
        return 0;
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Hàm tính tổ hợp C(n, k)
int combination(int n, int k) {
    return Factorial(n) / (Factorial(k) * Factorial(n - k));
}

int main() {
    int m;
    cin >> m;
    int total = 0;

    for (int i = 0; i < m; i++) {
        int n, k;
        cin >> n >> k;
        total += combination(n, k);
    }

    cout << total << endl;
    return 0;
}
