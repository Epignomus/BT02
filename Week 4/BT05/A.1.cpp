#include <iostream>
using namespace std;

int main()
{
    int n;
    int l;
    int a[100];
    char b[100];
    for(int i=0; i<3; i++)
        cout << &a[i] << endl;
    for(int i=0; i<3; i++)
        cout << (void *)&b[i] << endl;
    int x;
    int y;
    cout << &n << endl << &l << endl << &x << endl << &y;
    // Khoảng cách giữa mỗi biến int là 4 và char là 1.
    // Các biến trước khai báo mảng, khi được khai báo sẽ có địa chỉ gần nhau hơn.
}
