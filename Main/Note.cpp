                                                      C++
1) Form 
if() {} else if(){} else{}
for() {}
while() {}
void() {}
struct {};
switch() {
case ' ':
    break;
default:
}
======================================================================================================================================================================================================================================================================================================
2) Ép kiểu
cout << double(a) / b;   ✅     Thực / Nguyên ==> Thực
cout << double (a / b);  ❌     double(Nguyên / Nguyên) ==> Nguyên,0
======================================================================================================================================================================================================================================================================================================
3) Range based for loop
for (int i : a) {
    cout << i << " ";
}
======================================================================================================================================================================================================================================================================================================
4) Enum
enum a{
    nam, // 0
    vinh,  // 1
    cuong   // 2
};
======================================================================================================================================================================================================================================================================================================
5) Toán tử 3 ngôi 
string dapan = (1 < 2) ? "True" : "False";   
cout << dapan;


Nếu viết tắt trong hàm thì có thể viết như này: 
int min(int x, int y) {
    return (x < y) ? x : y;
}
======================================================================================================================================================================================================================================================================================================
6) Hằng số
const int a = 10;

6.1) Size
string a = "Vinh";
cout << "Kích thước của chuỗi a: " << sizeof(a);           //34
cout << "Số lượng phần tử trong chuỗi a: " <<  a.size();     //4   

======================================================================================================================================================================================================================================================================================================
7) Nhập kích thước của Mảng xong rồi nhập các phần tử của mảng khi đủ số lượng phần tử của mảng thì tự ngừng ( Xuống dòng hay cùng dòng đều được )

int n;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}
======================================================================================================================================================================================================================================================================================================
8) Nhập phần tử liên tục ( Cùng hàng, gặp Enter là DỪNG ) 

#include <sstream>

    string line;
    getline(cin, line);

    stringstream ss(line);
    string s;                   

    while(ss >> s) { 
       
    }
======================================================================================================================================================================================================================================================================================================
9) Getline vs Cin

cin >> a;
cin.ignore();
getline(cin, a);

==> Nếu sau cin có getline() thì cần đặt cin.ignore(); ở giữa để xóa khoảng còn thừa của cin để tránh getline(); đọc dấu cách đó  
======================================================================================================================================================================================================================================================================================================
10) Ước chung lớn nhất và Bội chung nhỏ nhất

#include <algorithm>
int gcd =  __gcd(a, b); 
int lcm = (a * b) / __gcd(a, b);

cout << "Ước chung lớn nhất: " << gcd << endl;
cout << "Bội chung nhỏ nhất: " << lcm << endl;
======================================================================================================================================================================================================================================================================================================
11) Kiểm tra vector rỗng 

if (v.empty()) cout << "Vector Rỗng";
else cout << "Vector Không Rỗng";

======================================================================================================================================================================================================================================================================================================

12) Lư Quốc Vinh ( 19/12/2006 ) ( Data Scientist / AI Engineering / Lead Maneger)
Gia đình Khỏe mạnh, Hạnh phúc, Khá giả, Bình yên
4 bánh 3 tầng 2 con 1 Gia đình hạnh phúc và Viên mãn
Lương 3000$, Toeic 800,...

======================================================================================================================================================================================================================================================================================================
                                              Tư duy

1) Xuất ra theo đúng thứ tự của Map 
Khi thêm phần tử vào set hay map thì set và map đều tự động sắp xếp lại thứ tự nên 
nếu muốn XUẤT ra màn hình đúng theo thứ tự nhập vào thì thêm một điều kiện if kiểm tra xem phần tử đó đã có trong map chưa 
nếu chưa thì thêm vào vector trước để lưu thứ tự rồi mới thêm phần tử đó vào set hoặc map

2) Gán cờ ( bool kết hợp với if )
2.1) Sau khi xảy ra ... => thì thực hiện ... cho dù có đang trong for hay duyệt gì đi nữa
2.2) Thực hiện hành động gì đó 1 lần duy nhất lần sau có gặp thì cũng không thực hiện nữa ( Lần đầu cờ = true 
kết hợp với && điều kiện mình muốn, thực hiện hành động xong rồi thì chỉnh biến cờ lại thành false )
2.3) Đánh dấu trong mảng có tồn tại điều kiện phù hợp mình muốn hay không
2.4) Đánh dấu khi muốn thoát khỏi vòng lặp

3) ** Tư duy đánh dấu ( Đặt cờ )
bool check = false;
==> Và 2 if khác đánh dấu trong rất nhiều trường hợp làm bài

VD: ( if(...) thì a = true, if(a = true) thì ... )

======================================================================================================================================================================================================================================================================================================
13) Số nguyên nhỏ nhất và số nguyên lớn nhất
#include <climits>
int min = INT_MIN;
int max = INT_MAX;

13.1) *p++
Viết thế này:            Thực chất là:                       Tác động:
*p++                       *(p++)                   Dời con trỏ p sang phần tử kế tiếp
(*p)++                     (*p)++                   Tăng giá trị tại ô p đang trỏ tới 
    
======================================================================================================================================================================================================================================================================================================
14) Các loại nhập

int a[5];           // Mảng tỉnh kích thước cố định
int a[5] = {};     // Mảng tỉnh mọi phần tử = 0;

vector<int> v;               // Vector rỗng tự mở rộng khi push_back
vector<int> v(n);           // Tạo vector có n phần tử, mặc định giá trị = 0    
vector<int> v(n, 5);       // Tạo vector có n phần tử, mỗi phần tử = 5


// Nhập 1 dãy số và thêm vào vector
    string line;
    getline(cin,line);

    stringstream ss(line);
    int n;

    vector<int> v;
    while(ss >> n){
        v.push_back(n);
    }


// Nhập kích thước xong rồi nhập các phần tử 
    int n;
    cin >> n;
    vector<int> mang(n);
    
    for(int i = 0; i < n; i++){
        cin >> mang[i];
    }


// Nhập kích thước xong rồi nhập các phần tử ( Nhưng không sài thư viện )
    int n;
    cin >> n;
    int mang[n];

    for(int i = 0; i < n; i++){
        cin >> mang[i];
    }

======================================================================================================================================================================================================================================================================================================
15)                                       Tham chiếu và Con trỏ 

void Thamchieu(int &x){
    x = 100;
}

void Contro(int *x){ 
    *x = 100;
}

int main(){
    int b = 5;
    Thamchieu(b);                // b = 100
    Contro(&b);                 // b = 100
}
======================================================================================================================================================================================================================================================================================================
19) Mảng bool
    int mang[100];
    bool dadem[100] = {false};        // Toàn bộ 100 phần tử của đã damdem đều có giá trị false
    ==> Có thể dùng để đánh dấu vị trí của mảng 

======================================================================================================================================================================================================================================================================================================
20)              **Thư viện

    #include <iomanip> ==> fixed, setprecision,...
    #include <cmath> ==> pow, sqrt, cbrt, ceil, floor, round, abs, fabs,...
    #include <algorithm> ==>  sort, reverse, find, count, max_element(), min_element(),...
    #include <sstream> ==> stringstream,...
    #include <climits> ==> INT_MIN, INT_MAX,...
    
               *Thư viện cmath 

    1	pow(x, y)              Trả về x mũ y
    2	sqrt(x)	           Trả về căn bậc 2 của x
    3	cbrt(x)	           Trả về căn bậc 3 của x
    4	ceil(x)	               Làm tròn lên
    5	floor(x)              Làm tròn xuống
    6	round(x)            Làm tròn bình thường (>=5)
    7   abs(x)	             Trị tuyệt đối (int)	
    8	fabs(x)	         Trị tuyệt đối ( double, float )

======================================================================================================================================================================================================================================================================================================
                    ***Thư viện algorithm 

 Hàm	                   Tác dụng	                             Cú pháp

sort()	                Sắp xếp tăng dần 	             sort(a.begin(), a.end());
reverse()	              Đảo ngược              	  reverse(s.begin(), s.end());
max_element()	  Trả iterator phần tử lớn nhất	     max_element(a.begin(), a.end());
min_element()	 Tương tự, trả phần tử nhỏ nhất	     min_element(a.begin(), a.end());
count()         Đếm số lần xuất hiện của phần tử	  count(s.begin(), s.end(), 'a');
find()	       Tìm phần tử đầu tiên có giá trị x	  find(a.begin(), a.end(), x);

======================================================================================================================================================================================================================================================================================================
21) Sự khác nhau giữa 2 cách duyệt 1 chuỗi ( For đọc được từng kí tự kể cả " " ) còn ( While thì bỏ " " để đọc phần tử )

| Đặc điểm           | for (char c : s)                                        | while (ss >> x)                               |
| ------------------ | --------------------------------------------------------|---------------------------------------------  |
| 💡 Dùng để         | Duyệt từng ký tự trong chuỗi string                     | Đọc từng từ hoặc số từ stringstream           |
| 🔍 Dữ liệu duyệt   | Từng ký tự trong string                                 | Từng phân đoạn tách bằng khoảng trắng         |
| 📦 Loại dữ liệu    | char                                                    | string, int, v.v. (tùy mục đích dùng)         |
| 🧠 Cách dùng       | for (char c : s)                                        | stringstream ss(s); while (ss >> word)        |
| 📌 Tình huống dùng | Kiểm tra từng ký tự, ví dụ: xóa dấu cách, đếm chữ cái...| Đọc từng từ hoặc số từ input dòng             |
| 🛠️ Ví dụ dùng      | Xóa khoảng trắng trong chuỗi                            | Tính tổng các số nhập từ 1 dòng               |

==> Lưu ý: Cách while bỏ qua khoảng trắng còn for(char c : s) đọc được khoảng trắng 
nên sẽ mạnh về khoảng duyệt mọi kí tự trong chuỗi hơn còn while sẽ mạnh về duyệt từng phần tử hơn

==> for (range based for loop) đọc được khoảng trắng còn while (sstream) thì không

======================================================================================================================================================================================================================================================================================================
22) Viết ngược ( Reverse áp dụng được cho cả string, array, vector, deque,...)
   
    vector<string> a;   
    for(string s : a){
    reverse(s.begin(), s.end()); ==> Viết ngược phần tử bên trong 
        cout << s << " ";
    }

    reverse(a.begin(), a.end());
    for(string s : a){
        cout << s << " ";        ==> Viết ngược toàn bộ mảng 
    }

22.1) Max, Min, Count, Find.

    vector<int> a = {3, 7, 2, 9, 7, 2, 5};

    // 1. max_element: tìm phần tử lớn nhất
    auto it_max = max_element(a.begin(), a.end());
    cout << "Max = " << *it_max << endl; // 9

    // 2. min_element: tìm phần tử nhỏ nhất
    auto it_min = min_element(a.begin(), a.end());
    cout << "Min = " << *it_min << endl; // 2

    // 3. count: đếm số lần xuất hiện của 7
    int cnt = count(a.begin(), a.end(), 7);
    cout << "Số lần xuất hiện của 7 = " << cnt << endl; // 2

    // 4. find: tìm vị trí đầu tiên có giá trị 2
    auto it = find(a.begin(), a.end(), 2);
    if(it != a.end()){
        cout << "Vị trí đầu tiên của 2 = " << it - a.begin() << endl; // 2
    } 
    else { cout << "Không tìm thấy" << endl; }


                                    Giải thích phần 4 FIND
// Chi tiết:
_find(a.begin(), a.end(), 2) → trả về iterator trỏ tới phần tử có giá trị 2.
_iterator chỉ biết “trỏ tới đâu”, chứ bản thân nó không lưu số thứ tự.
_a.begin() cũng là một iterator, trỏ tới phần tử đầu tiên.

======================================================================================================================================================================================================================================================================================================
24) Xóa phần tử của String 

1) XÓA (i) phần tử đầu tiên 
string s = "Hello World";
s = s.substr(6);                  
cout << s << endl;      // "World"
    
2) Lấy 3 phần tử từ vị trí số 2 
string a = "abcdefg";
a = a.substr(2, 3);                
cout << a;           // "cde"


// Chú thích
substr
s.substr(pos)    : Lấy phần tử sau pos
s.substr(pos, n) : Lấy n phần tử sau pos

erase
s.erase(pos)     : Lấy phần tử trước pos
s.erase(pos, n)  : Lấy n phần tử trước pos

======================================================================================================================================================================================================================================================================================================
                                              Vector
| Hàm thành viên          | Mục đích                                          | Ví dụ ngắn                                 |
|-------------------------|---------------------------------------------------|--------------------------------------------|
| size() / length()       | Trả về độ dài chuỗi                               | s.size() hoặc s.length()                   |
| empty()                 | Kiểm tra chuỗi có rỗng hay không                  | s.empty()                                  |
| clear()                 | Xóa hết nội dung chuỗi                            | s.clear()                                  |
| push_back               | Thêm ký tự `c` vào cuối chuỗi                     | s.push_back('a')                           |
| pop_back()              | Xóa ký tự cuối cùng của chuỗi                     | s.pop_back()                               |
| push_front()            | Thêm kí tự vào đầu                                | s.push_back()                              |
| pop_front()             | Xóa kí tự đầu                                     | s.pop_back()                               |
| substr(pos, len)        | Trích xuất chuỗi con bắt đầu tại `pos`, dài `len` | s.substr(2, 4) → lấy 4 ký tự từ vị trí 2   |
| find(str)               | Tìm vị trí xuất hiện đầu tiên của chuỗi `str`     | s.find("abc")                              |
| replace(pos, len, str)  | Thay thế phần chuỗi từ `pos`, độ dài `len` bằng chuỗi `str` | s.replace(1, 3, "xyz")           |
| insert(pos, str)        | Chèn chuỗi `str` vào vị trí `pos`                 | s.insert(2, "hello")                       |
| erase(pos, len)         | Xóa phần chuỗi từ `pos`, dài `len`                | s.erase(1, 3)                              |
| compare(str)            | So sánh chuỗi với chuỗi khác                      | s.compare("abc")                           |
| at(pos)                 | Truy cập ký tự tại vị trí `pos`                   | char c = s.at(0)                           |

======================================================================================================================================================================================================================================================================================================
25) Lưu ý về Range for based loop for(char c : s){}

for(char c : s) trong C++ là duyệt theo kiểu tham trị ( Pass by value ).
Nghĩa là biến c chỉ là một bản sao của từng ký tự trong chuỗi s
Khi bạn thay đổi c, chuỗi gốc s không bị ảnh hưởng.
==> Nếu muốn thì phải thêm &: for(char &c : s){}

======================================================================================================================================================================================================================================================================================================
***                                              Trick lord
#include <bits/stdc++.h>

In thường, in Hoa, max_element
s[i] = toupper(s[i]) : Chuyển kí tự thành chữ HOA
s[i] = tolower(s[i]) : Chuyển kí tự thành chữ THƯỜNG 

if(isupper(s[i])) : Kiểm tra phải chữ Hoa không
if(islower(s[i])) : Kiểm tra phải chữ Thường không



* Xuất các đáp án true false thành chữ thay vì số 0 1 thì sài cout << boolalpha << 
* Định dạng đầu ra số thập phân << fixed << setprecision();
* Nếu muốn xử lí sâuuu các phần tử của stringstream thì có thể push_back từng phần đó vào một VECTOR rồi xử lí 



vector<int> a = {1,2,3,4,5,2,2,3,4,4,4};
1) Max_element trả về iterator vị trí của phần tử lớn nhất
auto it = max_element(a.begin(), a.end());               // #include <algorithm>
cout << "Phần tử lớn nhất là: " << *it;                 // Sài *it để thấy giá trị bởi vì it tương tự như con trỏ

                             
                               1.1) Find trả về iterator trỏ tới vị trí phần tử cần tìm 
                                    auto it = find(a.begin(), a.end(), 2);             

                                            2.2) Distance trả về số bước (khoảng cách) giữa 2 iterator
                                                 int index = distance(a.begin(), it);                      
                                                 cout << "Vị trí: " << index;
                                                     
                                                   
                                                         2.3) Count trả về số lần xuất hiện của phần tử cần tìm
                                                              int cnt = count(v.begin(), v.end(), x);                                        
                                                              cout << "Số lần xuất hiện của 2 là: " << cnt << endl;


2) Đếm số lượng của phần tử mình chọn trong Container xem nó có số lượng bao nhiêu
vector<int> v = {1,2,3,4,5,2,2,3,4,4,4};

int cnt = count(v.begin(), v.end(), 2);                    
cout << "Số lần xuất hiện của 2 là: " << cnt << endl;

======================================================================================================================================================================================================================================================================================================
**27) Dạng bài ĐÁNH DẤU [ Mẹo sài 2 if, 1 if để đánh dấu 1 if để thực thi ]

    bool check = false;
    for(int i = 0; i < s.size(); i++){
        if(check){                        //Tư duy: Nếu check ĐÚNG thì thực hiện lệnh if này
            s[i] = toupper(s[i]);
            check = false;
        }

        if(s[i] == ' '){
            check = true;                 //if này để làm check ĐÚNG 
        }
    }

======================================================================================================================================================================================================================================================================================================
26)                                                 Find(1)

1) Tìm kiếm xem chuỗi x có trong chuỗi s hay không
      if(pos = line.find(x) != string::npos){cout << "x có tồn tại trong s";}

2) Tìm kiếm xem chuỗi x xuất hiện bao nhiêu lần trong chuỗi s
       string s,x;
       getline(cin,s);
       getline(cin,x);
    
       size_t pos = 0;
       int count = 0;

       while(( pos = s.find(x,pos)) != string::npos){
        count++;
        pos += 1;
    }
    cout << count;

======================================================================================================================================================================================================================================================================================================
***28)                                                 FIND(2)

1) String
string s =  "HELLO";
size_t pos = s.find("H");
if( pos != string::npos ){}

                   1.1) String nhiều lần
                        size_t pos = 0; 
                        while( (pos = s.find(x, pos)) != string::npos){
                        count++;
                        pos++;}

2) array, vector, deque, list
  vector<int> v = {1,2,3,4,5};
  if(find(v.begin(), v.end(), 3) != v.end()){}

3) set, map, unordered_set, unordered_map
   set<int> a = {1,2,3,4,5};
   if(a.find(3) != a.end()){}

======================================================================================================================================================================================================================================================================================================
**29) Tìm phần tử Xuất hiện nhiều nhất

int main(){
    vector<int> a = {1,2,3,4,5,2,2,3,4,4,4};
    map<int, int> m;

    for(int i : a){m[i]++;}    
    
    int phantu = a[0];
    int max = m[phantu];
    int index = 0;
    
    for(int i = 0; i < a.size(); i++){
        if(max < m[a[i]]){
           max = m[a[i]];
           phantu = a[i];
           index = i;
        }
    }
    
    cout << "Phần tử xuất hiện nhiều nhất là: " << phantu << endl;     //4
    cout << "Với số lượng: " << max << endl;                          //4
    cout << "Nằm ở vị trí "<< index << " trong vector";               //3
    
    return 0;
}

======================================================================================================================================================================================================================================================================================================
**30) Tìm phần tử có giá trị lớn nhất

    int main(){
    vector<int> a = {1,2,3,4,5,2,2,3,4,4,4};
    int max = a[0];
    
    for(int i = 0; i < a.size(); i++){
        if(max < a[i]){
           max = a[i];
        }
    }
    
    cout << "Phần tử có giá trị lớn nhất là: " << max;
    return 0;
}

Hoặc dùng Iterator:
    auto it = max_element(a.begin(), a.end());
    cout << "Phần tử có giá trị lớn nhất là: " << *it;


======================================================================================================================================================================================================================================================================================================
31) Deque giống như vector nhưng chỉnh sửa ở đầu và cuối đều được 

    deque<int> d = {1, 2, 3};   
    d.push_front(0);  // thêm đầu
    d.push_back(4);   // thêm cuối
    d.pop_front();    // xóa đầu
    d.pop_back();     // xóa cuối
    for (int x : d) cout << x << " ";


31.2) List giống deque nhưng có thể thêm ở đầu, cuối, giữa mảng đều được 
    list<int> l = {1, 2, 3};
    l.push_front(0);  // thêm đầu
    l.push_back(4);   // thêm cuối

    auto it = l.begin();
    ++it;             // trỏ tới phần tử 1
    l.insert(it, 10); // chèn 10 trước phần tử 1
    d.erase(it); 
    for (int x : l) cout << x << " ";
    

                                So sánh

| Container | Truy cập bằng []    | Thêm/xóa đầu   | Thêm/xóa giữa  | Bộ nhớ    |
| --------- | ------------------  | ------------   | -------------  | --------- |
| vector    | ✅ Có               | ❌ Chậm       | ❌ Chậm        | Liền khối |
| deque     | ✅ Có               | ✅ Nhanh      | ❌ Chậm        | Chia khối |
| list      | ❌ Không            | ✅ Nhanh      | ✅ Nhanh       | Rải rác   |


======================================================================================================================================================================================================================================================================================================
32) Dòng 1 là số nguyên dương n, dòng 2 là n số nguyên ( Giống với mục số 7 ở trên )

    int n;
    cin >> n; 
    int a[1000];     // Giả sử n <= 1000

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
                                 Bảng so sánh mục 32 với mục 7 phía trên:

| Đoạn code      | Đặc điểm                                                       | Ghi chú                                                                                  |
| -------------- | -------------------------------------------------------------- | ---------------------------------------------------------------------------------------- |
| int a[n];      | Dùng mảng có kích thước động (VLA – Variable Length Array)     | Chuẩn C++ không hỗ trợ chính thức, nhưng nhiều trình biên dịch như GCC cho phép.         |
| int a[1000];   | Dùng mảng tĩnh, cấp phát cố định trước                         | An toàn hơn trong C++, chỉ cần đảm bảo n <= 1000.                                        |


======================================================================================================================================================================================================================================================================================================
33) Chỉ sau khi cố gắng đọc tiếp mà không còn dữ liệu, ss.eof() mới trả về true.
    while (ss >> word) {
            last = word;
            if (!ss.eof()) {
                // ...
          } 
     }

    Khi bạn đọc được từ cuối cùng, ss.eof() vẫn chưa trả về true ngay lập tức.
    Chỉ sau khi cố gắng đọc tiếp mà không còn dữ liệu, ss.eof() mới trả về true.

======================================================================================================================================================================================================================================================================================================
34) Lọc thứ tự trùng nhưng khi xuất ra vẫn phải theo thứ tự nhập vào

vector<int> v;
set<int> s;

while(ss >> n){
    if(s.find(n) == s.end()) v.push_back(n);
    s.insert(n);
}

for(int i : v) cout << i << " ";

======================================================================================================================================================================================================================================================================================================
35)                                                 Đệ quy 

Form Đệ Quy
Đệ quy bắt buột có 2 thành phần đó là: 
if( ... )  return ... ;         //Điều kiện dừng
return ...                     //... là mối liên hệ giữa các phần tử



void In(int n){
    if(n == 0) return;
    cout << n << " ";
    In(n-1);
}  

int Fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);  
}

int Giaithua(int n){
    if(n == 0 || n == 1) return 1;
    return n * Giaithua(n-1);   
}

int Sum(int n){
    if(n == 0) return 0;
    return n + Sum(n-1);
}

======================================================================================================================================================================================================================================================================================================
                                          Giải nghĩa lí thuyết

Tham số: Số từ ngoài truyền vào hàm
Đối số:  Số nằm sẵn bên trong hàm dùng để truyền tham số vào 


Tham chiếu &: Thay đổi trực tiếp giá trị của biến gốc                                         // Reference 
Tham trị: Không thay đổi trực tiếp giá trị của biến gốc mà chỉ đang thao tác trên 1 biến ảo         // Pass by value

Void: Được gọi là HÀM THỰC THI

Iterator: là đối tượng trừu tượng do container cung cấp, 
không trỏ trực tiếp đến ô nhớ vật lý như con trỏ thông thường mà chỉ đóng vai trò truy cập phần tử trong container
======================================================================================================================================================================================================================================================================================================
                                           Config Json
Bật gợi ý hoàn thành code của AI:
Trong setting json
"editor.inlineSuggest.enabled": true,  // Bật tính năng gợi ý code thông minh trong dòng (inline suggestion.enabled)

Làm cho terminal bên ngoài Vscode không TẮT ngay phải nhấn phím bất kì mới tắt được thì thêm dòng này vào cuối code:
system("pause");

Xuất ra màn hình terminal bên ngoài VS Code:
"externalConsole": True,
Xuất ra màn hình terminal bên trong VS Code:
"externalConsole": False,
                                    
======================================================================================================================================================================================================================================================================================================

| Tên file                    | Đường dẫn                       | Chức năng                                                                                          | Khi cần                                                           |
| --------------------------- | ------------------------------- | -------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------- |
| **`tasks.json`**            | `.vscode/tasks.json`            | Quy định **cách build (biên dịch)**: dùng compiler nào, lưu file exe ở đâu, đặt tên output thế nào | Luôn cần nếu muốn tự tùy chỉnh cách build, ví dụ lưu `.exe` riêng |
| **`launch.json`**           | `.vscode/launch.json`           | Quy định **cách chạy và debug** chương trình: chạy file exe nào, dùng debugger nào (gdb, msvc,...) | Cần khi muốn “Run” hoặc “Debug” trong VS Code                     |
| **`c_cpp_properties.json`** | `.vscode/c_cpp_properties.json` | Quy định **môi trường phân tích code**: includePath, IntelliSense mode, compiler path              | Dùng để VS Code hiểu được mã nguồn và gợi ý code chính xác        |

