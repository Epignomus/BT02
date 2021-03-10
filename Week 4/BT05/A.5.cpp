#include <iostream>
using namespace std;

int main()
{
    int n = 10, m = 20;
    int &ref = n;
    cout << &ref << " " << &n; // Biến tham chiếu và biến nó chiếu tới là 1 trong bộ nhớ
    int &ref2; // Không thể khai báo biến tham chiếu mà không chiếu nó ngay tới 1 biến
    int &ref2 = m; // Được phép chiếu một tham chiếu tới một biến khác với đích ban đầu của nó
    return 0;
}
