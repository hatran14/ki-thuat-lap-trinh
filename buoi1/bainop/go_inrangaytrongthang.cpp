#include <bits/stdc++.h>
using namespace std;
bool kTraNamNhuan(int nam) {
  return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
  // if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
  //   return true;
  // else
  //   return false;
}
int check(int thang, int nam) {
  switch (thang)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    case 4:
    case 6:
    case 9:
    case 11:
      return 30;
    case 2:
      if (kTraNamNhuan(nam))
        return 29;

      else
        return 28;
    default:
      cout << "so thang nhap vao sai rui!!!"<<endl;
      exit(0);
  }
}
int main() {
  int thang, nam;

  do {

    cin >> thang;

    cin >> nam;
  } while (nam < 0 || thang < 1 || thang >12);

  cout <<check(thang, nam);
  return 0;
}