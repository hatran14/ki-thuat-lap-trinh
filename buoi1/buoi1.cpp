#include "iostream"

using namespace std;

int main()
{
  /**
   * HÀM MAIN
   * Hàm main là hàm bắt buộc phải có trong mọi chương trình c++
   * Hàm main sẽ được thực thi đầu tiên khi chương trình chạy
   */
  cout << "Hello world!" << endl;
  /**
   * NHẬP XUẤT DỮ LIỆU
   * Nhập dữ liệu từ bàn phím: cin >> variable;
   * Xuất dữ liệu ra màn hình: cout << variable;
   */
  int n;
  cout << "Nhap n: ";
  cin >> n;
  cout << "n = " << n << endl;
  /**
   * BIẾN
   * Cách đặt tên biến trong c++: bao gồm chữ cái, số và dấu gạch dưới, không bắt đầu bằng số
   */
  int a = 5;
  int b = 10;
  int _x, _y;

  /**
   * KIỂU DỮ LIỆU
   * Kiểu dữ liệu cơ bản trong c++: int, float, double, char, bool, string
   */
  int x = 5;
  float y = 5.5;
  double z = 5.5;
  char c = 'a';
  bool flag = true;
  string s = "Hello world!";

  /**
   * TOÁN TỬ
   * Các toán tử cơ bản trong c++: +, -, *, /, %, ++, --
   */
  int sum = a + b;
  int sub = a - b;
  int mul = a * b;
  int div = a / b;
  int mod = a % b;
  a++;
  b--;

  /**
   * CẤU TRÚC ĐIỀU KIỆN IF ELSE
   * Cú pháp: if (condition) { // code }
   */
  if (a > b)
  {
    cout << "a > b";
  }
  else if (a < b)
  {
    cout << "a < b";
  }
  else
  {
    cout << "a = b";
  }
  /**
   * CẤU TRÚC ĐIỀU KIỆN SWITCH CASE
   * Cú pháp: switch (variable) { case value: // code break; default: // code }
   */

  // if (a==1)
  switch (a)
  {
  case 1:
    cout << "a = 1";
    break;
  case 2:
    cout << "a = 2";
    break;
  default:
    cout << "a != 1 and a != 2";
  }

  /**
   * VÒNG LẶP FOR
   * Cú pháp: for (int i = 0; i < 10; i++) { // code }
   */
  for (int i = 0; i < 10; i++)
  {
    cout << i << " ";
  }

  /**
   * VÒNG LẶP WHILE
   * Cú pháp: while (condition) { // code }
   */
  int i = 0;
  while (i < 10)
  {
    cout << i << " ";
    i++;
  }

  /**
   * VÒNG LẶP DO WHILE
   * Cú pháp: do { // code } while (condition);
   */
  i = 0;
  do
  {
    cout << i << " ";
    i++;
  } while (i < 10); 

  cout << "Hello world!";
  return 0;
}