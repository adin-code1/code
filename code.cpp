#include<iostream>
#include<iomanip>
#include<math.h>
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
    bool z = (u < t) && (p >= t);
    cout << z << endl;
    bool w = (u < t) || (p >= t);
    cout << w << endl;
    bool y = !(u < t);
    cout << y << endl;

        //kiem soat sau . la bao nhieu so
    float it = 10.85f;
    cout << fixed << setprecision(2) << it << endl;

    int vy = -800;
    int pn = abs(vy);
    cout << " pn " << endl;
    int g = 40, e = 9;
    int h = pow(g , e);
    cout << h << endl;
    
    int i = sqrt(e);
    cout << i << endl;
    float x = 79.54f;

    int m = round(x);
    cout << m << endl;

    int N;
    cin >> N;
    if((N >= 5) && (N <= 10)){
        cout << " on " << endl;
    }
    else if((N < 5) && (N > 0)){
        cout << " thap " << endl;
    }
    else if((N > 10) && (N < 50)){
        cout << " cao " << endl;
    }
    else{
        cout << " du lieu ko hop le " << endl;
    }

    int n;
    cin >> n;
    switch ((int)(n)){
        case 1: case 3: case 5: case 7: case 9:
        cout << " le \n ";
        break;
        case 2: case 4: case 6: case 8: case 10:
        cout << " chan \n ";
        break;
        default:
        cout << " du lieu ko hop le \n";
    }

    return 0;
}