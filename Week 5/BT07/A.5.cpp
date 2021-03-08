#include <iostream>
using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}

int main()
{
    cout << weird_string();
}

// Hàm main output không có gì và trình biên dịch cảnh báo địa chỉ của biến địa phương c
