#include <iostream>
using namespace std;

void f(int A[]);

int main()
{
  int A[100];
  cout << &A << ' ' << &A[0] << endl;
  f(A);
  /* Kết quả cho thấy duy nhất địa chỉ của biến mảng A khi gọi qua hàm f
     khác với các địa chỉ còn lại */
}

void f(int A[])
{
    cout << &A << ' ' << &A[0] << endl;
}

