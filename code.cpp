#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << " hello world " << endl;
    int l = 100;
    cout << l << endl;

        //toan tu toan hc
    int a = 100, b = 200;
    a += b;
    cout << a << endl;
    a %= b;
    cout << a << endl;

        //ep kieu
    float r = 100;
    int q = 200;
    r /= (float)q;
    cout << r << endl;

        //tang tuoc, tang sau
    int ab = 400;
    int kc = ++ ab;
    cout << ab << endl;
    cout << kc << endl;

    int mn = 700;
    int om = mn++;
    cout << mn << endl;
    cout << om << endl;

        //toan tu so sanh + toan tu logic
    int u = 400, t = 500, v = 300, p = 900;
    bool n = (u < t) && (p >= t);
    cout << n << endl;
    bool w = (u < t) || (p >= t);
    cout << w << endl;
    bool y = !(u < t);
    cout << y << endl;

        //kiem soat sau . la bao nhieu so
    float it = 10.85f;
    cout << fixed << setprecision(2) << it << endl;
    return 0;
}