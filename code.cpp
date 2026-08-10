#include<iostream>
using namespace std;

int main()
{
    cout << " hello world " << endl;
    int l = 100;
    cout << l << endl;

    int a = 100, b = 200;
    a += b;
    cout << a << endl;
    a %= b;
    cout << a << endl;

    float r = 100;
    int q = 200;
    r /= (float)q;
    cout << r << endl;

    int ab = 400;
    int kc = ++ ab;
    cout << ab << endl;
    cout << kc << endl;

    int mn = 700;
    int om = mn++;
    cout << mn << endl;
    cout << om << endl;

    int u = 400, t = 500, v = 300, p = 900;
    bool n = (u < t) && (p >= t);
    cout << n << endl;
    bool w = (u < t) || (p >= t);
    cout << w << endl;
    bool y = !(u < t);
    cout << y << endl;
    return 0;
}