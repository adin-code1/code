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
    long long h = pow(x, 3) + (3* pow(x, 2)) + x + 1;     
    cout << h << endl;
}