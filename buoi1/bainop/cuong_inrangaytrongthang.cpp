#include <iostream>
using namespace std;

int main() {
    int month, year;
    
    // nhập tháng và năm
    cout << "Nhập số tháng (từ 1 đến 12): ";
    cin >> month;

    // viết 1 chương trình để kiểm tra năm nhuận
    if (month == 2) {
        // kiểm tra năm có phải năm nhuận ko
        cout << "Tháng 2 có 28 hoặc 29 ngày." << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "Tháng " << month << " có 30 ngày." << endl;

    // ghi rõ các trường hợp cụ thể ở đây
    } else if (month >= 1 && month <= 12) { 
        cout << "Tháng " << month << " có 31 ngày." << endl;
    } else {
        cout << "loại! " << endl;
    }

    return 0;
}