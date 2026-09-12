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

void bai_tap_1A(){
    int n, m, a;
    cin >> n >> m >> a;
    long long q = (n + a -1)/a;
    long long w = (m + a -1)/a;
    long long k = q + w;
    cout << k << endl;
}

void bai_tap_frog(){
    long long a, b, k;
    cin >> a >> b >> k;
    if(k % 2 == 0){
        int h = k / 2 * (a-b);
        cout << h << endl;
    }
    else{
        int g = k / 2 * (a-b) + a;
        cout << g << endl;
    }
}

int main(){
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a = abs(s1), b = abs(s2), s = abs(s3);
    if (a + b <= s && s % 2 == 0){
        cout << " YES " << endl;
    }
    else{
        cout << " NO " << endl;
    }
}