#include "iostream"

using namespace std;

void reverse(char str[])
{
  // tìm chiều dài của chuỗi đã cho
  // duyệt qua từng kí tự ở trong chuỗi
  int len = 0;
  while (str[len] != '\0')
  {
    len++;
  }
  // 'istudyBK' sau kí tự d sẽ là \0
  char temp;
  for (int i = 0; i < len / 2; i++)
  {
    // lưu str[i] vào biến trung gian
    temp = str[i];
    // lưu str[i] bằng kí tự đối xứng với nó
    str[i] = str[len - i - 1];
    // lưu str[len - i -1] bằng kí tự đối xứng lưu ở trong biến tạm
    str[len - i - 1] = temp;
  }
  cout << str;
}

int main()
{
  char str[] = "abcde";
  reverse(str);
}