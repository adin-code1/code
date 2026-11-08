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

void bai4(){
    float n;
    cin >> n;
    float g = 1;
    for(float i = 1; i <= n; i++){
        g /= i;
        cout << fixed << setprecision(3) << g << endl;
    }
}

void bai5(){
    float n;
    cin >> n;
    float h = 0;
    for(int i = 2; i <= n; i += 2){
        h += 1.0 / i;
        
    }
    cout << fixed << setprecision(2) << h << endl; 
}

int main(){
    return 0;
}