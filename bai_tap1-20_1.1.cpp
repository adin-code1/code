#include<iostream>
#include<math.h>
using namespace std;

void bai_1(){
    long long a, b;
    cin >> a >> b;
    long long j = a / b;
    long long f = a % b;
    cout << j << " " << f << endl;
    
}

int main(){
    cout << " nhap gia tri cua x vao ";
    long long x;
    cin >> x;
    long long h = x * x * x + 3 * x * x + x + 1;
    cout << h << endl;
}