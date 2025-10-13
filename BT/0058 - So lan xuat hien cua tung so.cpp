    #include <iostream>
    using namespace std;
    int main(){
        int n;          
        cin >> n;                     // Nhập phạm vi số lượng phần tử trước
        int mang[1000];
        bool check[1000] = {false};  // LƯU Ý Khai báo MẢNG bool phải để true hoặc fasle trong dấu {}

        for(int i = 0; i < n; i++){ 
            cin >> mang[i];
        }
        
        for(int i = 0; i < n; i++){
            if(check[i]){
            continue;
        } 
            int dem = 1;
            for(int j = i + 1; j < n; j++){
                if(mang[i] == mang[j]){
                    dem++;
                    check[j] = true;
                }
            }
            cout << mang[i] << " " << dem << endl;
        }
    return 0;
}