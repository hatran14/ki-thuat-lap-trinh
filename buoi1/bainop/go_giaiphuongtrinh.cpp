#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, delta, x1, x2;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Nhap so c: ";
    cin >> c;
    cout<<"\nPhuong trinh co dang: "<<a<<"x^2 +"<<b<<"x +"<<c<<" = 0";
    if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                cout << "\nphuong trinh vo so nghiem." << endl;
            } else {
                cout << "\nphuong trinh vo nghiem." << endl;
            }
        } else {
            cout << "\nphuong trinh nghiem x = " << -c/b << endl;
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "\nNghiem thu nhat x1 = " << x1 << endl;
            cout << "Nghiep thu hai x2 = " << x2 << endl;
        } else if ( delta == 0) {
            cout << "\nPhuong trinh co nghiem kep: x1 = x2 = " << -b/2*a << endl;
        } else {
            cout << "\nPhuong trinh vo nghiem" << endl;
        }
    }

    return 0;
}