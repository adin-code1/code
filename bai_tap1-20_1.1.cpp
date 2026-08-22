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

void bai_5(){
    int r;
    cin >> r;
    float c = 2 * 3.14 * r;
    float P = 3.14 * r * r;
    cout << fixed << setprecision(2) << c << " " << P << endl;
} 

void bai_6(){
    float x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << fixed << setprecision(2) << d << endl;
}

void bai_7(){
    float C;
    cin >> C;
    float F = (C * 9 / 5) + 32;
    cout << fixed << setprecision(2) << F << endl;
}

void bai_8(){
    unsigned long long n;
    cin >> n;
    long long Sn = n *(n + 1) /2;
    cout << Sn << endl;
}