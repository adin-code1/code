#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout << " hello world " << endl;
    int a = 10, b = 40;
    a += b;
    cout << a << endl;
    // kiem tre gia tri lon nhat be nhat(max, min)
    cout << INT_MAX << endl;
    cout << LLONG_MIN << endl;
    //kiem tra gia tri
    float diem = 9.75f;
    cout << typeid(diem).name() << endl;
    int t;
    cin >> t;
    cout << t << endl;

    // hang so. ko bao gio thay doi
    const int Ui = 700;
    cout << Ui << endl;
    
    // thang cap kieu
    float q = 40.9f;
    int r = 70;
    float O = q + r;
    cout << O << endl;

    //xem kich thuoc cua bien
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;

    // ep kieu
        //ep kieu rong
    int w = 70000;
    cout << (float)w << endl;

        //ep kieu hep, loai mat
    long long s = 80000000000;
    cout << (short)r << endl;

        //ep kieu hep, loai du
    long long z = 700000;
    cout << (int)z << endl;
    return 0;
}