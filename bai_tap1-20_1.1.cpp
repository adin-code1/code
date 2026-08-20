#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

void bai_1(){
    long long a, b;
    cin >> a >> b;
    long long j = a / b;
    long long f = a % b;
    cout << j << " " << f << endl;
    
}

void bai_2(){
    cout << " nhap gia tri cua x vao ";
    long long x;
    cin >> x;
    long long h = x * x * x + 3 * x * x + x + 1;
    cout << h << endl;
}

void bai_3(){
    int a, b, c;
    a = abs(a);   b = abs(b);    c = abs(c);
    cin >> a >> b >> c;
    int S = a*(b + c) + b*(a + c);
    cout << S << endl;
    
}

void bai_4(){
    int a, b;
    cin >> a >> b;
    
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = (float)a/b;
    cout << tong << " " << hieu << " " << tich << " " << fixed << setprecision(2) << thuong << endl;
    
}