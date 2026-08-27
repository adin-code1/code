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

void bai_9(){
    unsigned long long n;
    cin >> n;
    long long Sn = n *(n + 1) * (2 * n + 1) / 6;
    cout << Sn << endl;
}

void bai_10(){
    float n;
    cin >> n;
    float Sn = n/(n+1);
    cout << fixed << setprecision(2) << Sn << endl;
}

void bai_11(){
    long long n;
    cin >> n;
    long long Sn = n*(n+1);
    cout << Sn << endl;
}

void bai_12(){
    long long n;
    cin >> n;
    if((n % 2 == 0)){
        long long Sn = n/2;
        cout << Sn << endl;
    }
    else{
        long long N = (n - 1) / 2 - n;
        cout << N << endl;
    }
}

void bai_13(){
    int a, b;
    cin >> a >> b;
    int n = (a / b) * b;
    cout << n << endl;
}

void bai_14(){
    int a, b;
    cin >> a >> b;
    int n = (a + b - 1)/ b * b;
    cout << n << endl;
}

void bai_15(){
    int n;
    cin >> n;
    if((n % 3 == 0) && (n % 5 == 0)){
        cout << " 1 " << endl;
    }
    else{
        cout << " 0 " << endl;

    }
}

void bai_16(){
    int n;
    cin >> n;
    if(n > 0){
        if((n % 400 == 0) || (n % 4 == 0) && (n != 100)){
            cout << " YES " << endl;
        }
        else if( n % 2 == 1){
            cout << " NO " << endl;
        }
        else if( n % 2 == 0){
            cout << " NO " << endl;
        }
    }
    else{
        cout << " INVAID " << endl;
    }
}

void bai_17(){
    int thang, nam;
    cin >> thang, nam;
    switch(thang){
        case 1 : case 3: case 5: case 7: case 8: case 10: case 12:
        cout << " 31 " << endl;
        break;
        case 4: case 6: case 9: case 11:
        cout << " 30 " << endl;
        break;
        case 2:
            if((nam % 4 == 0) || (nam % 400 == 0) && (nam != 100)){
                cout << " 29 " << endl;
            }
            else{
                cout << " 28 " << endl;
            }
        break;
        default:
        cout << " INVALID " << endl;
    }
    
    
}

void bai_18(){
    char n;
    cin >> n;
    if((n >= 97 && n <= 122)){
        cout << " YES " << endl;
    }
    else{
        cout << " NO " << endl;
    }
}

void bai_19(){
    char n;
    cin >> n;
    if(n >= 65 && n <= 90){
        cout << " YES " << endl;
    }
    else{
        cout << " NO " << endl;
    }
}

void bai_20(){
    char n;
    cin >> n;
    if((n >= 65 && n <= 122)){
        cout << " YES " << endl;
    }
    else{
        cout << " NO " << endl;
    }
}

void bai_21(){
    char n;
    cin >> n;
    if(n >= 48 && n <= 57){
        cout << " YES " << endl;
    }
    else{
        cout << " NO " << endl;
    }
}

void bai_22(){
    char n;
    cin >> n;
    if(n >= 65 && n <= 90){
        char k = n + 32;
        cout << k << endl;
    }
    else{
        cout << n << endl;
    }
}

void bai_23(){
    char n;
    cin >> n;
    if(n >= 97 && n <= 122){
        char h = n - 32;
        cout << h << endl;
    }
    else{
        cout << n << endl;
    }
}

void bai_24(){
    char n;
    cin >> n;
    if(n >= 65 && n <= 89){
        char m = n + 33;
        cout << m << endl;
    }
    else if(n == 90){
        char h = n + 7;
        cout << h << endl;
    }
    else if(n >= 49 && n <= 57){
        char g = n + 60;
        cout << g << endl;
    }
    else{
        cout << " INVALID " << endl;
    }
}

void bai_25(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a != b) && (b != c) && (c != a) && (a > 0 && b > 0 && c > 0)){
        cout << " YES " << endl;
    }
    else{
        cout << " NO " << endl;
    }
    
}

void bai_26(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b > c){
        if( a == b == c == a){
            cout << " 1 " << endl;
        }
        else if((a == b) || (b == c) || ( a == c)){
            cout << " 2 " << endl;
        }
        else if((a * a) + (b * b) == (c * c)){
            cout << " 3 " << endl;
        }
        else{
            cout << " 4 " << endl;
        }
    }
    else{
        cout << " INVALID " << endl;
    }
}

void bai_27(){
    int n;
    cin >> n;
    int nam = n / 365;
    int tuan_du = n % 365;
    int tuan = tuan_du / 7;
    int ngay = tuan_du % 7;
    cout << nam << " " << tuan << " " << ngay << endl;
}

void bai_28_(){
    float a, b, c;
    cin >> a >> b >> c;
    float n = (b * b) - (4 * a * c);

    if(n > 0){
        float h1 = (-b + sqrt(n)) / (2 * a);
        float h2 = (-b - sqrt(n)) / (2 * a);
        cout << fixed << setprecision(2) <<  h1 << " " << setprecision(2) << h2 << endl;
    }    
    else if(n == 0){
        float g = b / (2 * a);
        cout << fixed << setprecision(2) << g << endl;
    }
    else{
        cout << " NO " << endl;
    }
    
}

void bai_29(){
    float a, b;
    cin >> a >> b;
    float n = b - a;
    int u = round(n);
    cout << u << endl;
}