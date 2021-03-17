#include <iostream>
using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   y = yval;
   cout << &y << endl;
}
int main()
{
   f(7);
   g(11);
   return 0;
}

/* Địa chỉ của 2 biến trùng nhau. Có thể thấy tính chất của 2 hàm được gọi tương đồng nhau nên
vị trí của stack frame cho hàm f khi nó chạy trùng với vị trí của hàm g khi nó được gọi*/



