#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float a, b, c;
  float delta, x2, x3, x1;

  cout << "Nhap a: ";
  cin >> a;

  cout << "Nhap b: ";
  cin >> b;

  cout << "Nhap c: ";
  cin >> c;

  if (a == 0)
  {
    cout << "khong phai la phuong trinh bac hai." << endl;
  }
  else
  {
    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);

      cout << "x1 = " << x1 << " x2 = " << x2 << endl;
    }
    else if (delta == 0)
    {
      x1 = -b / (2 * a);

      cout << " x1 = x2 = " << x1 << endl;
    }
    else
    {
      cout << " vo nghiem." << endl;
    }
  }

  return 0;
}