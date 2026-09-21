#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

void bai1(){
    int s = 0, d;
    cin >> d;
    for(int i = 1; i <= d; i++){
        s += i;
    }
    cout << s << endl;
}

void bai2(){
    int s = 0;
    int h;  cin >> h;
    for(int i = 1; i <= h; i++){
        s += i * i;
    }
    cout << s << endl;
}

void bai3(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i += 3){
        cout << i << endl;
    }
}

