#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

void bai_tap_224A(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long v = sqrt(a * b * c);
    long long d = v/a, r = v/b, h = v/c;
    long long f = 4*(d + r + h);
    cout << f << endl;
}

void bai_tap_50A(){
    int m, n;
    cin >> m >> n;
    int hinh = (m * n)/2;
    cout << hinh << endl;
}