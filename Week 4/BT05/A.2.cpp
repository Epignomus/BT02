#include <iostream>
using namespace std;

long factorial(int x)
{
    cout << "X's address is: " << &x << endl;
    if(x==1) return 1;
    return (x*factorial(x-1));
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}

// Địa chỉ của chuỗi giá trị in ra màn hình cách đều nhau.
// Kích thước mỗi stackframe trong ví dụ này là 30.
