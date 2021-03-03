#include <iostream>
using namespace std;

// Hàm đệ quy
long F(int n) {
   if (n == 0) return 0;
   if (n == 1) return 1;
   return F(n-1) + F(n-2);
}

// Hàm vòng lặp
long  loopF(int n) {

    int t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 0; i < n; i++)
        {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        }
    return t1;
}

int main()
{
    int n = 40;
    /*Lần lượt dùng 2 hàm ở đây để thấy thời gian khi dùng vòng lặp
      ít hơn thời gian khi dùng đệ quy*/
    // Thay đổi n để tự so sánh với các trường hợp khác
}
